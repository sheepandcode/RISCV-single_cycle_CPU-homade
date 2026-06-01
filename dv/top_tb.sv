module top_tb;
    logic clk, nrst;

    initial clk = 0;
    always #5 clk = ~clk; //10ns clock period

    //reset to hold low for 2 cycles then release
    initial begin
        nrst = 0;
        repeat(2) @(posedge clk);
        @(negedge clk);
        nrst = 1;
    end

    top dut(
        .clk(clk),
        .nrst(nrst)
    );

    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb_top);
    end

    logic [31:0] x1, x2, x3, x4, x5, x6, x7, x8;

    assign x1 = dut.reg_file.regs[1];
    assign x2 = dut.reg_file.regs[2];
    assign x3 = dut.reg_file.regs[3];
    assign x4 = dut.reg_file.regs[4];
    assign x5 = dut.reg_file.regs[5];
    assign x6 = dut.reg_file.regs[6];
    assign x7 = dut.reg_file.regs[7];
    assign x8 = dut.reg_file.regs[8];

    integer pass_count, fail_count;

    task check;
        input [63:0] name_unused;
        input [31:0] actual;
        input [31:0] expected;
        input string label;
        begin
            if(actual == expected) begin
                $display("PASS %s = %0d (expected %0d)", label, actual, expected);
                pass_count = pass_count + 1;
            end else begin
                $display("FAIL  %s = %0d (expected %0d)", label, actual, expected);
                fail_count = fail_count + 1;
            end
        end
    endtask

    initial begin
        pass_count = 0;
        fail_count = 0;

        @(posedge nrst);
        repeat(20) @(posedge clk);

        check(0, x1, 32'd48,  "x1  (JAL ret addr)");  // PC of JAL instr=0x2C, +4=0x30=48
        check(0, x2, 32'd5,   "x2  (addi x0,5)   ");
        check(0, x3, 32'd15,  "x3  (add)          ");
        check(0, x4, 32'd5,   "x4  (sub)          ");
        check(0, x5, 32'd0,   "x5  (and)          ");
        check(0, x6, 32'd15,  "x6  (or)           ");
        check(0, x7, 32'd15,  "x7  (lw)           ");
        check(0, x8, 32'd99,  "x8  (pass marker)  ");

        $display("  %0d passed, %0d failed", pass_count, fail_count);

        repeat(10) @(posedge clk);
        $finish;
    end

    initial begin
        #10000;
        $display("TIMEOUT — simulation ran too long");
        $finish;
    end
    

endmodule