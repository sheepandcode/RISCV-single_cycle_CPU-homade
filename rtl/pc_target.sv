module pc_target (
    input logic [31:0] pc_addr,
    input logic [31:0] imm_ext,

    output logic target_addr
);
    assign target_addr = pc_addr + imm_ext;
endmodule