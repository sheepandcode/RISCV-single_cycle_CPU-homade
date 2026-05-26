/*
    Support PC+4, branch, jump target
*/
module program_counter (
    input logic clk, nrst,
    input logic [1:0] pc_select,
    input logic [31:0] branch_addr,
    input logic [31:0] jump_addr,

    output logic [31:0] pc_addr
);
    logic [31:0] addr_reg;

    always_comb begin
        addr_reg = pc_addr;
        case(pc_select) 
            2'b0: addr_reg = pc_addr + 32'd4;
            2'd1: addr_reg = branch_addr;
            2'd2: addr_reg = jump_addr;
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