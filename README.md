# riscv32-pipelined-cpu

## RV32I 5-Stage Pipelined Processor

A 32-bit RISC-V processor implementing a subset of the **RV32I base instruction set** using a classic **5-stage pipeline** and **Harvard memory architecture**.
The design focuses on a clean modular microarchitecture with hazard handling and a structured SystemVerilog RTL implementation suitable for simulation and architectural study.

---

## Features

* RV32I instruction subset implementation
* Classic **5-stage pipeline architecture**
* **Hazard detection and data forwarding**
* Modular **SystemVerilog RTL design**
* Structured **simulation environment**
* Architecture documentation and pipeline design breakdown

---

## Pipeline Architecture

The processor follows the classic RISC pipeline structure.

| Stage | Description                          |
| ----- | ------------------------------------ |
| IF    | Instruction Fetch                    |
| ID    | Instruction Decode and Register Read |
| EX    | Execute / ALU Operations             |
| MEM   | Data Memory Access                   |
| WB    | Write Back to Register File          |

Pipeline registers isolate each stage:

```
IF/ID → ID/EX → EX/MEM → MEM/WB
```

The pipeline includes hazard management through forwarding logic and stall mechanisms.

---

## Supported Instruction Set

### R-Type (Register–Register ALU)

```
ADD  SUB  AND  OR
SLT
```

### I-Type (Immediate / Load)

```
ADDI  ANDI  ORI 
LW
```

### S-Type (Store)

```
SW
```

### B-Type (Branch)

```
BEQ  BNE
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
├── docs/        # Architecture diagrams and design specifications
│
├── rtl/         # SystemVerilog RTL modules
│
├── sim/         # Simulation configuration and scripts
│
├── tb/          # Verification testbench environment
│
└── scripts/     # Utility and automation scripts
```

---

## Design Goals

* Develop a **clean and modular pipelined CPU microarchitecture**
* Implement **hazard detection and forwarding mechanisms**
* Maintain a **clear separation between datapath and control logic**
* Provide a well-documented design suitable for **learning and architectural experimentation**

---

## Simulation

The processor is designed to be simulated using common RTL simulation tools.
Waveforms can be analyzed using waveform viewers such as **GTKWave**.

Simulation scripts and configurations are located in the `sim/` directory.

---

## License

This project is open-source and intended for **educational and research purposes**.


![Pipeline Architecture](docs/pipeline_architecture.png)
