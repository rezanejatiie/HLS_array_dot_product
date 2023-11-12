############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project HLS_array_dot_product-main
set_top hw_dot_product
add_files HLS_array_dot_product-main/source/hw_array_dot_pr.cpp
add_files -tb HLS_array_dot_product-main/source/sw_array_dot_pr.cpp -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb HLS_array_dot_product-main/source/sw_array_dot_pr.h -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb HLS_array_dot_product-main/source/tb_array_dot_pr.cpp -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./HLS_array_dot_product-main/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -compiled_library_dir "D:/AA_ProgramFiles/HLS_Project"
export_design -rtl vhdl -format ip_catalog -vendor "aa" -display_name "aaa"
