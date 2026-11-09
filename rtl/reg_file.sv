// 32 registers with two combinational read ports and one clocked write port.
module reg_file (
    input logic clk, nrst,
    input logic [4:0] rs1_addr, //A1
    input logic [4:0] rs2_addr, //A2
    input logic [4:0] write_addr, //A3
    input logic [31:0] write_data,
    input logic write_en,

    output logic [31:0] read_data_1,
    output logic [31:0] read_data_2
);
    logic [31:0] regs [31:0];
    integer i;

    always_comb begin
        read_data_1 = regs[rs1_addr];
        read_data_2 = regs[rs2_addr];

    end

    // Asynchronous active-low reset clears all registers.
    always_ff @( posedge clk or negedge nrst ) begin
        if(!nrst) begin
            for(i = 0; i < 32; i++)
                regs[i] <= 32'd0;
        end
        else begin
            // x0 is hardwired to zero: discard writes to it and keep it cleared.
            if(write_en && write_addr != 5'd0) 
                regs[write_addr] <= write_data;
            regs[0] <= 32'd0;
        end
    end
endmodule