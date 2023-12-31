// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "hw_dot_product.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic hw_dot_product::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic hw_dot_product::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<9> hw_dot_product::ap_ST_fsm_state1 = "1";
const sc_lv<9> hw_dot_product::ap_ST_fsm_state2 = "10";
const sc_lv<9> hw_dot_product::ap_ST_fsm_state3 = "100";
const sc_lv<9> hw_dot_product::ap_ST_fsm_state4 = "1000";
const sc_lv<9> hw_dot_product::ap_ST_fsm_state5 = "10000";
const sc_lv<9> hw_dot_product::ap_ST_fsm_state6 = "100000";
const sc_lv<9> hw_dot_product::ap_ST_fsm_state7 = "1000000";
const sc_lv<9> hw_dot_product::ap_ST_fsm_state8 = "10000000";
const sc_lv<9> hw_dot_product::ap_ST_fsm_state9 = "100000000";
const sc_lv<32> hw_dot_product::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> hw_dot_product::ap_const_lv32_1 = "1";
const sc_lv<32> hw_dot_product::ap_const_lv32_2 = "10";
const sc_lv<32> hw_dot_product::ap_const_lv32_3 = "11";
const sc_lv<32> hw_dot_product::ap_const_lv32_4 = "100";
const sc_lv<32> hw_dot_product::ap_const_lv32_5 = "101";
const sc_lv<32> hw_dot_product::ap_const_lv32_6 = "110";
const sc_lv<32> hw_dot_product::ap_const_lv32_7 = "111";
const sc_lv<64> hw_dot_product::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<64> hw_dot_product::ap_const_lv64_1 = "1";
const sc_lv<64> hw_dot_product::ap_const_lv64_2 = "10";
const sc_lv<64> hw_dot_product::ap_const_lv64_3 = "11";
const sc_lv<64> hw_dot_product::ap_const_lv64_4 = "100";
const sc_lv<64> hw_dot_product::ap_const_lv64_5 = "101";
const sc_lv<64> hw_dot_product::ap_const_lv64_6 = "110";
const sc_lv<64> hw_dot_product::ap_const_lv64_7 = "111";
const sc_lv<64> hw_dot_product::ap_const_lv64_8 = "1000";
const sc_lv<64> hw_dot_product::ap_const_lv64_9 = "1001";
const sc_lv<32> hw_dot_product::ap_const_lv32_8 = "1000";
const bool hw_dot_product::ap_const_boolean_1 = true;

hw_dot_product::hw_dot_product(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_a_address1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_a_ce1);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_b_address0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_b_address1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_b_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_b_ce1);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_grp_fu_255_p2);
    sensitive << ( reg_239 );
    sensitive << ( reg_243 );

    SC_METHOD(thread_grp_fu_261_p2);
    sensitive << ( reg_247 );
    sensitive << ( reg_251 );

    SC_METHOD(thread_out_r);
    sensitive << ( tmp4_reg_449 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( tmp_fu_319_p2 );

    SC_METHOD(thread_out_r_ap_vld);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_tmp1_fu_279_p2);
    sensitive << ( reg_267 );
    sensitive << ( reg_271 );

    SC_METHOD(thread_tmp2_fu_291_p2);
    sensitive << ( reg_267 );
    sensitive << ( tmp3_fu_285_p2 );

    SC_METHOD(thread_tmp3_fu_285_p2);
    sensitive << ( reg_271 );
    sensitive << ( reg_275 );

    SC_METHOD(thread_tmp4_fu_313_p2);
    sensitive << ( tmp6_fu_307_p2 );
    sensitive << ( tmp5_fu_297_p2 );

    SC_METHOD(thread_tmp5_fu_297_p2);
    sensitive << ( reg_267 );
    sensitive << ( tmp_1_5_reg_414 );

    SC_METHOD(thread_tmp6_fu_307_p2);
    sensitive << ( reg_271 );
    sensitive << ( tmp7_fu_302_p2 );

    SC_METHOD(thread_tmp7_fu_302_p2);
    sensitive << ( reg_275 );
    sensitive << ( tmp_1_9_reg_444 );

    SC_METHOD(thread_tmp_fu_319_p2);
    sensitive << ( tmp1_reg_409 );
    sensitive << ( tmp2_reg_439 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "hw_dot_product_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a_address0, "(port)a_address0");
    sc_trace(mVcdFile, a_ce0, "(port)a_ce0");
    sc_trace(mVcdFile, a_q0, "(port)a_q0");
    sc_trace(mVcdFile, a_address1, "(port)a_address1");
    sc_trace(mVcdFile, a_ce1, "(port)a_ce1");
    sc_trace(mVcdFile, a_q1, "(port)a_q1");
    sc_trace(mVcdFile, b_address0, "(port)b_address0");
    sc_trace(mVcdFile, b_ce0, "(port)b_ce0");
    sc_trace(mVcdFile, b_q0, "(port)b_q0");
    sc_trace(mVcdFile, b_address1, "(port)b_address1");
    sc_trace(mVcdFile, b_ce1, "(port)b_ce1");
    sc_trace(mVcdFile, b_q1, "(port)b_q1");
    sc_trace(mVcdFile, out_r, "(port)out_r");
    sc_trace(mVcdFile, out_r_ap_vld, "(port)out_r_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, reg_239, "reg_239");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, reg_243, "reg_243");
    sc_trace(mVcdFile, reg_247, "reg_247");
    sc_trace(mVcdFile, reg_251, "reg_251");
    sc_trace(mVcdFile, grp_fu_255_p2, "grp_fu_255_p2");
    sc_trace(mVcdFile, reg_267, "reg_267");
    sc_trace(mVcdFile, grp_fu_261_p2, "grp_fu_261_p2");
    sc_trace(mVcdFile, reg_271, "reg_271");
    sc_trace(mVcdFile, reg_275, "reg_275");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, tmp1_fu_279_p2, "tmp1_fu_279_p2");
    sc_trace(mVcdFile, tmp1_reg_409, "tmp1_reg_409");
    sc_trace(mVcdFile, tmp_1_5_reg_414, "tmp_1_5_reg_414");
    sc_trace(mVcdFile, tmp2_fu_291_p2, "tmp2_fu_291_p2");
    sc_trace(mVcdFile, tmp2_reg_439, "tmp2_reg_439");
    sc_trace(mVcdFile, tmp_1_9_reg_444, "tmp_1_9_reg_444");
    sc_trace(mVcdFile, tmp4_fu_313_p2, "tmp4_fu_313_p2");
    sc_trace(mVcdFile, tmp4_reg_449, "tmp4_reg_449");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, tmp3_fu_285_p2, "tmp3_fu_285_p2");
    sc_trace(mVcdFile, tmp7_fu_302_p2, "tmp7_fu_302_p2");
    sc_trace(mVcdFile, tmp6_fu_307_p2, "tmp6_fu_307_p2");
    sc_trace(mVcdFile, tmp5_fu_297_p2, "tmp5_fu_297_p2");
    sc_trace(mVcdFile, tmp_fu_319_p2, "tmp_fu_319_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("hw_dot_product.hdltvin.dat");
    mHdltvoutHandle.open("hw_dot_product.hdltvout.dat");
}

hw_dot_product::~hw_dot_product() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void hw_dot_product::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        reg_239 = a_q0.read();
        reg_243 = b_q0.read();
        reg_247 = a_q1.read();
        reg_251 = b_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        reg_267 = grp_fu_255_p2.read();
        reg_271 = grp_fu_261_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        reg_275 = grp_fu_255_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        tmp1_reg_409 = tmp1_fu_279_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        tmp2_reg_439 = tmp2_fu_291_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        tmp4_reg_449 = tmp4_fu_313_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        tmp_1_5_reg_414 = grp_fu_261_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        tmp_1_9_reg_444 = grp_fu_261_p2.read();
    }
}

void hw_dot_product::thread_a_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        a_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        a_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        a_address0 = "XXXX";
    }
}

void hw_dot_product::thread_a_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        a_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        a_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        a_address1 = "XXXX";
    }
}

void hw_dot_product::thread_a_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)))) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void hw_dot_product::thread_a_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)))) {
        a_ce1 = ap_const_logic_1;
    } else {
        a_ce1 = ap_const_logic_0;
    }
}

void hw_dot_product::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void hw_dot_product::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void hw_dot_product::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void hw_dot_product::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void hw_dot_product::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void hw_dot_product::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void hw_dot_product::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void hw_dot_product::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void hw_dot_product::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void hw_dot_product::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void hw_dot_product::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void hw_dot_product::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void hw_dot_product::thread_b_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        b_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        b_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        b_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        b_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        b_address0 = "XXXX";
    }
}

void hw_dot_product::thread_b_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        b_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        b_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        b_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        b_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        b_address1 = "XXXX";
    }
}

void hw_dot_product::thread_b_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)))) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void hw_dot_product::thread_b_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)))) {
        b_ce1 = ap_const_logic_1;
    } else {
        b_ce1 = ap_const_logic_0;
    }
}

void hw_dot_product::thread_grp_fu_255_p2() {
    grp_fu_255_p2 = (!reg_239.read().is_01() || !reg_243.read().is_01())? sc_lv<32>(): sc_bigint<32>(reg_239.read()) * sc_bigint<32>(reg_243.read());
}

void hw_dot_product::thread_grp_fu_261_p2() {
    grp_fu_261_p2 = (!reg_247.read().is_01() || !reg_251.read().is_01())? sc_lv<32>(): sc_bigint<32>(reg_247.read()) * sc_bigint<32>(reg_251.read());
}

void hw_dot_product::thread_out_r() {
    out_r = (!tmp4_reg_449.read().is_01() || !tmp_fu_319_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp4_reg_449.read()) + sc_biguint<32>(tmp_fu_319_p2.read()));
}

void hw_dot_product::thread_out_r_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        out_r_ap_vld = ap_const_logic_1;
    } else {
        out_r_ap_vld = ap_const_logic_0;
    }
}

void hw_dot_product::thread_tmp1_fu_279_p2() {
    tmp1_fu_279_p2 = (!reg_267.read().is_01() || !reg_271.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_267.read()) + sc_biguint<32>(reg_271.read()));
}

void hw_dot_product::thread_tmp2_fu_291_p2() {
    tmp2_fu_291_p2 = (!tmp3_fu_285_p2.read().is_01() || !reg_267.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp3_fu_285_p2.read()) + sc_biguint<32>(reg_267.read()));
}

void hw_dot_product::thread_tmp3_fu_285_p2() {
    tmp3_fu_285_p2 = (!reg_271.read().is_01() || !reg_275.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_271.read()) + sc_biguint<32>(reg_275.read()));
}

void hw_dot_product::thread_tmp4_fu_313_p2() {
    tmp4_fu_313_p2 = (!tmp6_fu_307_p2.read().is_01() || !tmp5_fu_297_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp6_fu_307_p2.read()) + sc_biguint<32>(tmp5_fu_297_p2.read()));
}

void hw_dot_product::thread_tmp5_fu_297_p2() {
    tmp5_fu_297_p2 = (!tmp_1_5_reg_414.read().is_01() || !reg_267.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_5_reg_414.read()) + sc_biguint<32>(reg_267.read()));
}

void hw_dot_product::thread_tmp6_fu_307_p2() {
    tmp6_fu_307_p2 = (!tmp7_fu_302_p2.read().is_01() || !reg_271.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp7_fu_302_p2.read()) + sc_biguint<32>(reg_271.read()));
}

void hw_dot_product::thread_tmp7_fu_302_p2() {
    tmp7_fu_302_p2 = (!reg_275.read().is_01() || !tmp_1_9_reg_444.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_275.read()) + sc_biguint<32>(tmp_1_9_reg_444.read()));
}

void hw_dot_product::thread_tmp_fu_319_p2() {
    tmp_fu_319_p2 = (!tmp2_reg_439.read().is_01() || !tmp1_reg_409.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp2_reg_439.read()) + sc_biguint<32>(tmp1_reg_409.read()));
}

void hw_dot_product::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<9>) ("XXXXXXXXX");
            break;
    }
}

void hw_dot_product::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_address0\" :  \"" << a_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce0\" :  \"" << a_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q0\" :  \"" << a_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_address1\" :  \"" << a_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce1\" :  \"" << a_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q1\" :  \"" << a_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address0\" :  \"" << b_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce0\" :  \"" << b_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q0\" :  \"" << b_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address1\" :  \"" << b_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce1\" :  \"" << b_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q1\" :  \"" << b_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_r\" :  \"" << out_r.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_r_ap_vld\" :  \"" << out_r_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

