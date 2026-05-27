module alu_mux (
    input logic alu_src,
    input logic [31:0] read_data_2,
    input logic [31:0] imm_ext,

    output logic [31:0] src_B
);
    assign src_B = (alu_src) ? read_data_2 : imm_ext;
endmodule