# riscv32-pipelined-cpu

## RV32I 5-Stage Pipelined Processor

A 32-bit RISC-V processor implementing a subset of the **RV32I base instruction set** using a classic **5-stage pipeline** and **Harvard memory architecture**.

---

## Features

* RV32I instruction set implementation
* 5-stage pipeline architecture (IF, ID, EX, MEM, WB)
* Hazard detection and data forwarding
* SystemVerilog RTL implementation
* UVM-based verification environment
* FPGA implementation and testing

---

## Pipeline Architecture

The processor follows the classic RISC pipeline structure:

| Stage | Description                          |
| ----- | ------------------------------------ |
| IF    | Instruction Fetch                    |
| ID    | Instruction Decode and Register Read |
| EX    | Execute / ALU Operations             |
| MEM   | Data Memory Access                   |
| WB    | Write Back to Register File          |

Pipeline registers separate each stage:

```
IF/ID → ID/EX → EX/MEM → MEM/WB
```

---

## Supported Instruction Set

### R-Type (Register-Register ALU)

```
ADD  SUB  AND  OR  XOR
SLL  SRL  SRA
SLT
```

### I-Type (Immediate / Load)

```
ADDI  ANDI  ORI  SLTI
LW
```

### S-Type (Store)

```
SW
```

### B-Type (Branch)

```
BEQ  BNE  BLT  BGE
```

### U-Type

```
LUI
```

### J-Type

```
JAL
```

---

## Project Structure

```
riscv32-pipelined-cpu/
│
├── docs/        # Architecture and design documentation
│
├── rtl/         # SystemVerilog CPU implementation
│
├── tb/          # Verification testbench and UVM environment
│
├── fpga/        # FPGA build scripts and constraints
│
└── scripts/     # Simulation and automation scripts
```

---

## Design Goals

* Clean modular microarchitecture
* Fully pipelined RV32I processor
* Industry-style verification using UVM
* FPGA deployment and testing

---

## License

This project is open-source and intended for educational and research purposes.
