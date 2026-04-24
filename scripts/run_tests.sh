#!/bin/bash

cd "$(dirname "$0")/.." || exit 1
pwd

TB_DIR="tb/block_tests"

echo "=== RISC-V CPU Test Runner ==="
echo

mkdir -p sim/block_sim

PASS=0
FAIL=0

run_test() {
    local name="$1"
    local tb_file="$2"

    echo -n "Running $name... "

    rm -rf obj_dir
    mkdir -p obj_dir

    local pkg_files="rtl/pkg/cpu_params.sv rtl/pkg/riscv_pkg.sv rtl/pkg/pipeline_pkg.sv"
    local rtl_files="rtl/utils/mux2.sv rtl/utils/mux3.sv rtl/utils/pipeline_reg.sv rtl/fetch/pc.sv rtl/fetch/pc_mux.sv rtl/fetch/imem.sv rtl/decode/decoder.sv rtl/decode/register_file.sv rtl/decode/immediate_generator.sv rtl/execute/alu.sv rtl/execute/alu_control.sv rtl/execute/branch_unit.sv rtl/execute/address_calculator.sv rtl/execute/forwarding_unit.sv rtl/writeback/wb_mux.sv rtl/control/main_control.sv rtl/control/hazard_unit.sv rtl/memory/data_memory.sv rtl/pipeline/if_id_reg.sv rtl/pipeline/id_ex_reg.sv rtl/pipeline/ex_mem_reg.sv rtl/pipeline/mem_wb_reg.sv"

    verilator --cc --exe --build --timing --main -Wno-fatal --trace --top-module "$name" \
        $pkg_files "$tb_file" $rtl_files > /tmp/verilator_out.txt 2>&1

    if ./obj_dir/V${name} > /tmp/runtime_out.txt 2>&1; then
        echo "PASS"
        PASS=$((PASS + 1))
    else
        local err_summary
        err_summary=$(grep -E "^%Error" /tmp/verilator_out.txt 2>/dev/null | head -1 | cut -c1-80)
        if [ -z "$err_summary" ]; then
            err_summary=$(tail -2 /tmp/runtime_out.txt | cut -c1-80)
        fi
        echo "FAIL: $err_summary"
        FAIL=$((FAIL + 1))
    fi
}

declare -A TEST_PATHS=(
    ["mux2_tb"]="utils/mux2_tb.sv"
    ["mux3_tb"]="utils/mux3_tb.sv"
    ["pipeline_reg_tb"]="utils/pipeline_reg_tb.sv"
    ["pc_tb"]="fetch/pc_tb.sv"
    ["pc_mux_tb"]="fetch/pc_mux_tb.sv"
    ["imem_tb"]="fetch/imem_tb.sv"
    ["decoder_tb"]="decode/decoder_tb.sv"
    ["register_file_tb"]="decode/register_file_tb.sv"
    ["immediate_generator_tb"]="decode/immediate_generator_tb.sv"
    ["alu_tb"]="execute/alu_tb.sv"
    ["alu_control_tb"]="execute/alu_control_tb.sv"
    ["branch_unit_tb"]="execute/branch_unit_tb.sv"
    ["address_calculator_tb"]="execute/address_calculator_tb.sv"
    ["forwarding_unit_tb"]="execute/forwarding_unit_tb.sv"
    ["data_memory_tb"]="memory/data_memory_tb.sv"
    ["wb_mux_tb"]="writeback/wb_mux_tb.sv"
    ["main_control_tb"]="control/main_control_tb.sv"
    ["if_id_reg_tb"]="pipeline/if_id_reg_tb.sv"
    ["id_ex_reg_tb"]="pipeline/id_ex_reg_tb.sv"
    ["ex_mem_reg_tb"]="pipeline/ex_mem_reg_tb.sv"
    ["mem_wb_reg_tb"]="pipeline/mem_wb_reg_tb.sv"
)

echo "Running ${#TEST_PATHS[@]} tests..."
echo

for name in "${!TEST_PATHS[@]}"; do
    tb_path="${TEST_PATHS[$name]}"
    run_test "$name" "$TB_DIR/$tb_path"
done

echo
echo "=== Results ==="
echo "PASS: $PASS"
echo "FAIL: $FAIL"

[ $FAIL -eq 0 ] && exit 0 || exit 1