############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project dot_product
set_top hw_dot_product
add_files dot_product/source/hw_array_dot_pr.cpp
add_files -tb dot_product/source/sw_array_dot_pr.cpp
add_files -tb dot_product/source/sw_array_dot_pr.h
add_files -tb dot_product/source/tb_array_dot_pr.cpp
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./dot_product/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
