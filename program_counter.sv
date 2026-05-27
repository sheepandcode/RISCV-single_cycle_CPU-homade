/*
    Support PC+4, branch, jump target
*/
module program_counter (
    input logic clk, nrst,
    input logic pc_src,
    input logic [31:0] imm_addr,

    output logic [31:0] pc_addr
);
    logic [31:0] addr_reg;

    always_comb begin
        case(pc_src) 
            1'b0: addr_reg = pc_addr + 32'd4;
            1'b1: addr_reg = pc_addr + imm_addr;
            default: addr_reg = pc_addr + 32'd4;
        endcase
    end

    always_ff @( posedge clk or negedge nrst ) begin
        if(!nrst) begin
            pc_addr <= 32'd0;
        end else begin
            pc_addr <= addr_reg;
        end

    end
endmodule