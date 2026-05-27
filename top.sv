module top #(
    parameters
) (
    input logic clk, nrst,
);
    //program counter
    logic [31:0] imm_addr;
    logic [31:0] pc_addr;
    //instruction mem
    logic [31:0] instruction;
    //register file
    logic [31:0] write_data;
    logic write_en;
    logic [31:0] read_data_1;
    logic [31:0] read_data_2;
    //immediate gen
    logic imm_src;
    logic [31:0] imm_ext;
    //alu mux
    logic alu_src;
    logic src_B;
    //alu
    logic [2:0] alu_control;
    logic [31:0] result;
    logic zero;
    logic mem_write;
    logic mem_read;
    //data memory
    logic [31:0] read_data;

    program_counter(
        .clk(clk),
        .nrst(nrst),
        .imm_addr(imm_addr),
        .pc_addr(pc_addr)
    );

    inst_mem(
        .pc_addr(pc_addr),
        .instruction(instruction)
    );

    reg_file(
        .clk(clk),
        .nrst(nrst),
        .rs1_addr(instruction[19:15]),
        .rs2_addr(instruction[24:20]),
        .write_addr(instruction[11:7]),
        .write_data(write_data),
        .write_en(write_en),

        .read_data_1(read_data_1),
        .read_data_2(read_data_2)
    );

    imm_gen(
        .instruction(instruction),
        .imm_src(imm_src),
        .imm_ext(imm_ext)
    );

    alu_mux(
        .alu_src(alu_src),
        .read_data_2(read_data_2),
        .imm_ext(imm_ext),
        .src_B(src_B)
    );

    alu(
        .src_A(read_data_1),
        .src_B(src_B),
        .alu_control(alu_control),
        .result(result),
        .zero_out(zero)
    );

    data_memory(
        .clk(clk),
        .nrst(nrst),
        .result(result),
        .read_data_2(read_data_2),
        .mem_write(mem_write),
        .mem_read(mem_read),
        .read_data(read_data)
    );

    control_unit(
        .op_code(instruction[6:0]),
        .funct3(instruction[14:12]),
        .funct7(instruction[31:25]),
        .zero(zero),
        .pc_src(pc_src),
        .mem_write(mem_write),
        .mem_read(mem_read),
        .alu_control(alu_control),
        .alu_src(alu_src),
        .imm_src(imm_src),
        .write_en(write_en),
        .result_src(result_src)
    );
endmodule