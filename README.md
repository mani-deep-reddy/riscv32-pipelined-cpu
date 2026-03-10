# riscv32-pipelined-cpu
RV32I 5-Stage Pipelined Processor

A 32-bit RISC-V CPU implementing the RV32I base instruction set using a classic 5-stage pipeline and Harvard memory architecture.

Features
• RV32I instruction set implementation
• 5-stage pipeline (IF, ID, EX, MEM, WB)
• Hazard detection and data forwarding
• SystemVerilog RTL design
• UVM-based verification environment
• FPGA implementation and testing

Project Structure

docs/      → Architecture and design documentation
rtl/       → SystemVerilog CPU implementation
tb/        → Verification testbench and UVM environment
fpga/      → FPGA build scripts and constraints
scripts/   → Simulation and automation scripts
