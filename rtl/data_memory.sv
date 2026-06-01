module data_mem (
    input logic clk, nrst,
    input logic [31:0] result,
    input logic [31:0] read_data_2,
    input logic mem_write,
    input logic mem_read,

    output logic [31:0] read_data
);
    logic [31:0] mem [0:255];
    integer i;

    always_comb begin : read_logic
        if(mem_read) 
            read_data = mem[result[9:2]];
        else
            read_data = 32'd0;
    end

    always_ff @( posedge clk or negedge nrst ) begin : write_data 
        if(!nrst) begin
            for(i = 0; i < 256; i++)
                mem[i] = 32'd0;
        end
        else if(mem_write) begin
            mem[result[9:2]] <= read_data_2;
        end
    end
endmodule