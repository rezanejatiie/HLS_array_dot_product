
set PATH=
call D:/AA_ProgramFiles/Vivado_2018_2/Vivado/2018.2/bin/xelab xil_defaultlib.apatb_hw_dot_product_top glbl -prj hw_dot_product.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm --initfile "D:/AA_ProgramFiles/Vivado_2018_2/Vivado/2018.2/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s hw_dot_product 
call D:/AA_ProgramFiles/Vivado_2018_2/Vivado/2018.2/bin/xsim --noieeewarnings hw_dot_product -tclbatch hw_dot_product.tcl

