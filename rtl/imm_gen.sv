// Reassemble each instruction format and sign-extend its immediate to 32 bits.
module imm_gen (
    input logic [31:0] instruction,
    input logic [1:0] imm_src,
    
    output logic [31:0] imm_ext
);
    // B/J offsets have an implicit low zero bit for two-byte alignment.
    always_comb begin : immediate_logic
        case (imm_src)
            2'b00: imm_ext = {{20{instruction[31]}}, instruction[31:20]}; //I type
            2'b01: imm_ext = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]}; //S type
            2'b10: imm_ext = {{19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0}; //B type
            2'b11: imm_ext = {{11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0}; //J type
            default: imm_ext = 32'd0;
        endcase
    end
endmodule