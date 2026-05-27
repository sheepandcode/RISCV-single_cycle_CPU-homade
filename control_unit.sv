module control_unit (
    input logic [6:0] op_code,
    input logic [2:0] funct3,
    input logic [6:0] funct7,
    input logic zero,

    output logic pc_src,
    output logic mem_write,
    output logic mem_read,
    output logic [2:0] alu_control,
    output logic alu_src,
    output logic [1:0] imm_src,
    output logic write_en,
    output logic result_src
);

    always_comb begin 
        write_en = 1'b0;
        imm_src = 2'b0;
        alu_src = 1'b0;
        alu_control = 3'b0;
        mem_read = 1'b0;
        mem_write = 1'b0;
        pc_src = 1'b0;
        result_src = 1'b0;
        case (op_code)
            7'b0110011: begin //R-type
                write_en = 1'b1;
                alu_src = 1'b0;
                result_src = 1'b0;
                case (funct3)
                    3'b000: begin
                    if(funct7 == 7'd0)
                        alu_control = 3'd0; //ADD
                    else if(funct7 == 7'b0100000)
                        alu_control = 3'd1; //SUBSTRACT 
                    end
                    3'b111: alu_control = 3'd2; //AND
                    3'b110: alu_control = 3'd3; //OR
                    3'b100: alu_control = 3'd4; //XOR
                    default: alu_control = 3'd2; //AND
                endcase
            end
            7'b0010011: begin //I type (addi)
                wwrite_en  = 1'b1;
                alu_src = 1'b1;
                alu_control= 3'd0;
                imm_src = 2'b00;
                result_src = 1'b0;
            end
            7'b0000011: begin //lw
                write_en = 1'b1;
                alu_src = 1'b1;
                alu_control = 3'd0;
                mem_read = 1'b1;
                imm_src = 2'b00;
                result_src = 1'b1;
            end
            7'b0100011: begin //sw
                alu_src = 1'b1;
                alu_control = 3'd0;
                mem_write = 1'b1;
                imm_src = 2'b01;
            end
            7'b1100011: begin //beq
                alu_control = 3'd1;
                imm_src = 2'b10;
                pc_src = zero;
            end
            7'b1101111: begin //jal
                pc_src = 1'b1;
                write_en = 1'b1;
                imm_src = 2'b11;
            end
            default: begin //R-type
                write_en = 1'b1;
                alu_src = 1'b0;
                alu_control = 3'b001;
                result_src = 1'b0;
            end
        endcase
    end
    
endmodule