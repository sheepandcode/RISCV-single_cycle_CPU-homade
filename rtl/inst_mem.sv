module inst_mem (
    input logic [31:0] pc_addr,
    output logic [31:0] instruction
);
    logic [7:0] mem [1023:0]; //1024 entries (1 entry = 8 bits) 

    initial begin
        $readmemh("program.hex", mem);
    end
    //each instruction contains 4 entries; combining 4 "blocks" of memory create a 32-bit instruction 
    assign instruction = {mem[pc_addr+3], mem[pc_addr+2], mem[pc_addr+1], mem[pc_addr]};

endmodule