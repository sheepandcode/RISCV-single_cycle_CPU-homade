module result_mux (
    input logic [31:0] result,
    input logic [31:0] read_data,
    input logic result_src,

    output logic [31:0] write_data
);
    assign write_data = (result_src) ? read_data : result;
endmodule