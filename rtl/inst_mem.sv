// Byte-addressed instruction ROM with a combinational 32-bit fetch.
module inst_mem (
    input logic [31:0] pc_addr,
    output logic [31:0] instruction
);
    logic [7:0] mem [1023:0]; //1024 entries (1 entry = 8 bits) 

    // program.hex supplies bytes and is resolved from the simulation working directory.
    initial begin
        $readmemh("program.hex", mem);
    end
    // Little-endian fetch: the lowest-addressed byte is instruction[7:0].
    assign instruction = {mem[pc_addr+3], mem[pc_addr+2], mem[pc_addr+1], mem[pc_addr]};

endmodule