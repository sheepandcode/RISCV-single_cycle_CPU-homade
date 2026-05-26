module alu_mux (
    input logic alu_src,
    input logic read_data_2,
    input logic imm_ext,

    output logic src_B
);
    assign src_B = (alu_src) ? read_data_2 : imm_ext;
endmodule