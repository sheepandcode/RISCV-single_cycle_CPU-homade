// Single-cycle datapath: fetch, decode, execute, memory read, and writeback
// are combinational between rising edges; PC/register/store updates are clocked.
module top (
    input logic clk, nrst
);
    // PC control and sign-extended immediate (offset shared with the ALU).
    logic [31:0] imm_addr;
    logic [31:0] pc_addr;
    logic pc_src;
    //instruction mem
    logic [31:0] instruction;
    //register file
    logic [31:0] write_data;
    logic write_en;
    logic [31:0] read_data_1;
    logic [31:0] read_data_2;
    //immediate gen
    logic [1:0] imm_src;
    //logic [31:0] imm_ext;
    //alu mux
    logic alu_src;
    logic [31:0] src_B;
    //alu
    logic [2:0] alu_control;
    logic [31:0] result;
    logic zero;
    logic mem_write;
    logic mem_read;
    //data memory
    logic [31:0] read_data;
    //result mux
    logic [1:0] result_src;
    // Sequential PC and return address used by JAL.
    logic [31:0] pc_plus_4;

    program_counter program_counter(
        .clk(clk),
        .nrst(nrst),
        .pc_src(pc_src),
        .imm_addr(imm_addr),
        .pc_addr(pc_addr),
        .pc_plus_4(pc_plus_4)
    );

    inst_mem inst_mem(
        .pc_addr(pc_addr),
        .instruction(instruction)
    );

    // Instruction fields: rs1 = [19:15], rs2 = [24:20], rd = [11:7].
    reg_file reg_file(
        .clk(clk),
        .nrst(nrst),
        .rs1_addr(instruction[19:15]),
        .rs2_addr(instruction[24:20]),
        .write_addr(instruction[11:7]),
        .write_data(write_data),
        .write_en(write_en),

        .read_data_1(read_data_1),
        .read_data_2(read_data_2)
    );

    imm_gen imm_gen(
        .instruction(instruction),
        .imm_src(imm_src),
        .imm_ext(imm_addr)
    );

    alu_mux alu_mux(
        .alu_src(alu_src),
        .read_data_2(read_data_2),
        .imm_ext(imm_addr),
        .src_B(src_B)
    );

    alu alu(
        .src_A(read_data_1),
        .src_B(src_B),
        .alu_control(alu_control),
        .result(result),
        .zero_out(zero)
    );

    // Stores use the original rs2 value, independent of ALU operand selection.
    data_mem data_mem(
        .clk(clk),
        .nrst(nrst),
        .result(result),
        .read_data_2(read_data_2),
        .mem_write(mem_write),
        .mem_read(mem_read),
        .read_data(read_data)
    );

    result_mux result_mux(
        .result(result),
        .read_data(read_data),
        .pc_plus_4(pc_plus_4),
        .result_src(result_src),
        .write_data(write_data)
    );

    control_unit control_unit(
        .op_code(instruction[6:0]),
        .funct3(instruction[14:12]),
        .funct7(instruction[31:25]),
        .zero(zero),
        .pc_src(pc_src),
        .mem_write(mem_write),
        .mem_read(mem_read),
        .alu_control(alu_control),
        .alu_src(alu_src),
        .imm_src(imm_src),
        .write_en(write_en),
        .result_src(result_src)
    );
endmodule