# Single-Cycle RISC-V Processor

A small 32-bit single-cycle processor written in SystemVerilog. This project implements a subset of RV32I for studying instruction decoding, datapath control, register operations, memory access, and control flow.

## Supported instructions

| Group | Instructions | Operation |
| --- | --- | --- |
| Register arithmetic | `ADD`, `SUB` | Add or subtract two registers |
| Register logic | `AND`, `OR`, `XOR` | Bitwise operations |
| Immediate arithmetic | `ADDI` | Add a sign-extended immediate |
| Memory | `LW`, `SW` | Load or store a 32-bit word |
| Branch | `BEQ` | Branch when two registers are equal |
| Jump | `JAL` | Jump relative to the PC and write PC+4 to `rd` |

This is not a complete RV32I implementation. The decoder treats all immediate-arithmetic, load, store, and branch instructions as `ADDI`, `LW`, `SW`, and `BEQ`, respectively, without checking `funct3`. Unsupported encodings within recognized opcodes do not necessarily behave as no-ops, and there is no illegal-instruction trap.

## Datapath

1. The program counter supplies a byte address to instruction memory.
2. The instruction selects source registers and determines control signals and the sign-extended immediate.
3. The ALU performs arithmetic/logic, calculates a memory address, or subtracts the branch operands.
4. Data memory supplies a load value or accepts a store on the rising clock edge.
5. The writeback mux selects the ALU result, memory data, or PC+4 for the destination register.

The next PC is PC+4, or PC plus the immediate for a taken `BEQ` or `JAL`. Register writes and PC updates occur on the rising clock edge. Active-low asynchronous reset (`nrst`) clears the PC, register file, and data memory. Register `x0` remains zero.

## Project files

| Path | Purpose |
| --- | --- |
| `rtl/top.sv` | Connects the datapath and control unit; exposes `clk` and `nrst` |
| `rtl/control_unit.sv` | Decodes instructions and generates control signals |
| `rtl/program_counter.sv` | Holds the PC and calculates sequential/relative next addresses |
| `rtl/inst_mem.sv` | 1 KiB instruction memory initialized from `program.hex` |
| `rtl/reg_file.sv` | 32 registers, two combinational read ports, one clocked write port |
| `rtl/imm_gen.sv` | Reconstructs and sign-extends I/S/B/J immediates |
| `rtl/alu_mux.sv` | Selects register or immediate ALU operand |
| `rtl/alu.sv` | Arithmetic, logic, and zero detection |
| `rtl/data_memory.sv` | 256-word data memory with combinational reads and clocked writes |
| `rtl/result_mux.sv` | Selects register writeback data |
| `rtl/pc_target.sv` | Standalone 32-bit target adder; currently unused by `top` |
| `dv/top_tb.sv` | Clock/reset generation, register checks, and waveform dumping |
| `program.hex` | Sample program stored as hexadecimal bytes |

## Memory layout

Instruction memory assembles four bytes in little-endian order: the byte at the PC becomes instruction bits `[7:0]`. Run simulations from the project root so `$readmemh` can find `program.hex`. The supplied image fills only part of instruction memory; remaining bytes are not explicitly initialized.

Data memory uses ALU address bits `[9:2]` to select one of 256 words. Address bits `[1:0]` and `[31:10]` are ignored, so unaligned or out-of-range addresses alias existing words. Byte/halfword accesses and alignment exceptions are not implemented.

## Simulation

Use Icarus Verilog (`iverilog` and `vvp`) with SystemVerilog support. GTKWave is optional for waveform viewing.

**Current testbench issue:** in `dv/top_tb.sv`, change `$dumpvars(0, tb_top);` to `$dumpvars(0, top_tb);` before compiling. The current name mismatch causes an elaboration error.

From the project root, after correcting that name:

```bash
mkdir -p build
iverilog -g2012 -s top_tb -o build/sim.out rtl/*.sv dv/top_tb.sv
vvp build/sim.out
gtkwave waveform.vcd
```

The testbench toggles the clock every five simulation time units, releases reset after two rising edges and the following falling edge, and checks registers after 20 more rising edges. It does not declare an explicit time unit, so the clock period should not be assumed to be 10 ns.

The sample program exercises arithmetic, logic, store/load, a taken branch, and a jump, then loops at its final instruction. Expected register values are:

| Register | Decimal value |
| --- | --- |
| `x1` | 48 (JAL return address) |
| `x2` | 5 |
| `x3` | 15 |
| `x4` | 5 |
| `x5` | 0 |
| `x6` | 15 |
| `x7` | 15 |
| `x8` | 99 |

The testbench prints individual `PASS`/`FAIL` messages and a total. Inspect these results: failures are reported with `$display`, not a failing process exit status. The sample checks do not cover every supported instruction or edge case.
