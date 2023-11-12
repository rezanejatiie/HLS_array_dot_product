# HLS_array_dot_product

In the project I use Vivado HLS version 2018.2
The board which use for the simulation is Zed board which is popular board which use the zynq FPGA

The source folder contains the four c++ code, the first one " hw_array_dot_pr.cpp "
include the code for creating the dot product of two arrays which the size defined by the
N = 10, but it could be changed by any other value.
in the for loop in the line 12 the keyword of " #pragma HLS unroll " is hint to the C synthesizer
to use parallel method to unroll the loop, the result of the synthesizer when not using the unroll are:

Product family: zynq
Target device: xc7z020clg484-1

Summary

Clock	Target	Estimated	
ap_clk	10.00 ns	8.510 ns	

Latency (clock cycles)



Latency 	Interval	
min	max 	min	max
41	41	    41	41	



the hardware which use:

	BRAM_18K	DSP48E	FF	LUT
DSP	-	-	-	-
Expression	-	3	0	81
FIFO	-	-	-	-
Instance	-	-	-	-
Memory	-	-	-	-
Multiplexer	-	-	-	51
Register	-	-	141	-
Total	0	3	141	132
Available	280	220	106400	53200
Utilization (%)	0	1	~0	~0

===================================================================
The result when unroll hint use for C synthesizer are:
Timing (ns)

Summary

Clock	Target	Estimated	
ap_clk	10.00	8.742	

--------------------
Latency (clock cycles)

Summary

Latency	  Interval	
min	max	  min	max
8	8	   8	8	
--------------------
Utilization Estimates
Summary

Name	BRAM_18K	DSP48E	FF	LUT
DSP	-	-	-	-
Expression	-	6	0	335
FIFO	-	-	-	-
Instance	-	-	-	-
Memory	-	-	-	-
Multiplexer	-	-	-	179
Register	-	-	393	-
Total	0	6	393	514
Available	280	220	106400	53200
Utilization (%)	0	2	~0	~0
---------------------

As we can see on the summary of the output the latency and interval reduced dramatically from 41 to 8 which means that the result becomes ready much
faster, but the hardware which is used is only two time increases.

=======================================

For testing the code to check if it is working good and correct I use the test bench to simulate the problem using normal C++ code and compare the
result from hardware implemented core and the software result.

by run the testbench code we can get the result as shown below:

hw_dot = 385
sw_dot = 385
hw dot OK
