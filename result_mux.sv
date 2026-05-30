module result_mux (
    input logic [31:0] result,
    input logic [31:0] read_data,
    input logic [1:0] result_src,
    input logic [31:0] pc_plus_4,

    output logic [31:0] write_data
);
    always_comb begin
        case(result_src)
            2'b00: write_data = result; //R type, I type
            2'b01: write_data = read_data; //memory load
            2'b10: write_data = pc_plus_4; //JAL link address
            default: write_data = result;
        endcase
    end
endmodule