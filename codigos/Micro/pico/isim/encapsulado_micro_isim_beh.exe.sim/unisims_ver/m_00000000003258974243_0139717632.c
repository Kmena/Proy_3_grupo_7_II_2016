/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif



static void Initial_47_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = (t0 + 264);
    t2 = *((char **)t1);
    t1 = (t0 + 2344);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 64);
    t1 = (t0 + 344);
    t2 = *((char **)t1);
    t1 = (t0 + 2436);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 64);
    t1 = (t0 + 424);
    t2 = *((char **)t1);
    t1 = (t0 + 2528);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 64);
    t1 = (t0 + 504);
    t2 = *((char **)t1);
    t1 = (t0 + 2620);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 64);

LAB1:    return;
}

static void Always_54_1(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;

LAB0:    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4060);
    *((int *)t2) = 1;
    t3 = (t0 + 3316);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 2116U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:
LAB8:    t11 = (t0 + 1656U);
    t12 = *((char **)t11);
    t11 = (t0 + 2344);
    t14 = (t0 + 2344);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = (t0 + 1564U);
    t18 = *((char **)t17);
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t18, 6, 2);
    t17 = (t13 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1748U);
    t3 = *((char **)t2);
    t2 = (t0 + 2436);
    t4 = (t0 + 2436);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1564U);
    t14 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t14, 6, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1840U);
    t3 = *((char **)t2);
    t2 = (t0 + 2528);
    t4 = (t0 + 2528);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1564U);
    t14 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t14, 6, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1932U);
    t3 = *((char **)t2);
    t2 = (t0 + 2620);
    t4 = (t0 + 2620);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1564U);
    t14 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t14, 6, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB15;

LAB16:    goto LAB7;

LAB9:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t13), 1, 100LL);
    goto LAB10;

LAB11:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 100LL);
    goto LAB12;

LAB13:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 100LL);
    goto LAB14;

LAB15:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 100LL);
    goto LAB16;

}

static void Cont_62_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2344);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2344);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1288U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 6, 2);
    t9 = (t0 + 4136);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 4068);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_63_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2436);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2436);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1380U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 6, 2);
    t9 = (t0 + 4172);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 4076);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_64_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 3720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2528);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2528);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1472U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 6, 2);
    t9 = (t0 + 4208);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 4084);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_65_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 3864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2620);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2620);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 6, 2);
    t9 = (t0 + 4244);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t23 = (t0 + 4092);
    *((int *)t23) = 1;

LAB1:    return;
}


extern void unisims_ver_m_00000000003258974243_0139717632_init()
{
	static char *pe[] = {(void *)Initial_47_0,(void *)Always_54_1,(void *)Cont_62_2,(void *)Cont_63_3,(void *)Cont_64_4,(void *)Cont_65_5};
	xsi_register_didat("unisims_ver_m_00000000003258974243_0139717632", "isim/encapsulado_micro_isim_beh.exe.sim/unisims_ver/m_00000000003258974243_0139717632.didat");
	xsi_register_executes(pe);
}
