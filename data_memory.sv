module data_mem (
    input logic clk, nrst,
    input logic [31:0] result,
    input logic [31:0] read_data_2,
    input logic mem_write,

    output logic read_data
);
    logic [31:0] mem [0:255];

    always_comb begin : read_logic
        if(mem_write == 1'b0) 
            read_data = read_data_2;
        else
            read_data = 32'd0;
    end

    always_ff @( posedge clk or negedge nrst ) begin : write_data 
        if(mem_write == 1'b1)
            mem[result] <= read_data_2;
    end
endmodule