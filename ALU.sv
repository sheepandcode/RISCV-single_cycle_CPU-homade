/*
Instructions: R-type, I-type, Branch, Jump, Load/stores 
*/
module alu (
    input logic [31:0] src_A,
    input logic [31:0] src_B,
    input logic [3:0] alu_control,

    output logic [31:0] result,
    output logic zero_out
); 
    always_comb begin : alu_logic
        result = 32'd0;
        case (alu_control)
            4'd0: result = src_A + src_B; //ADD
            4'd1: result = src_A - src_B; //SUB
            4'd2: result = src_A & src_B; //AND
            4'd3: result = src_A | src_B; //OR
            4'd4: result = src_A ^ src_B; //XOR
            4'd5: result = src_A << src_B[4:0]; //SLL
            4'd6: result = src_A >> src_B[4:0]; //SRL
            default: result = 32'd0;
        endcase
        zero_out = (result == 32'd0);

    end
endmodule