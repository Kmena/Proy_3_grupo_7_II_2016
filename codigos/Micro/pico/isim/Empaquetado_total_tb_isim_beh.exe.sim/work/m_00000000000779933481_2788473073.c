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
static const char *ng0 = "C:/Users/User/Documents/Proy_3_grupo_7_II_2016/codigos/Empaquetado_total_tb.v";
static unsigned int ng1[] = {0U, 255U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {46U, 0U};
static unsigned int ng7[] = {90U, 0U};
static int ng8[] = {8, 0};
static unsigned int ng9[] = {240U, 0U};



static void Cont_50_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 2996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1416U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 3676);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 7);
    t37 = (t0 + 3624);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2380);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t18, 8, t23, 8);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Initial_70_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);

LAB4:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3040);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1828);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1828);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB4;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

LAB12:    goto LAB1;

}

static void Initial_71_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);

LAB4:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3184);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3184);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3184);
    xsi_process_wait(t2, 3000000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3184);
    xsi_process_wait(t2, 3000000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB1;

}

static void Always_90_3(char *t0)
{
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 3428U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3632);
    *((int *)t2) = 1;
    t3 = (t0 + 3456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    t2 = (t0 + 2472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB9:    xsi_set_current_line(97, ng0);

LAB11:    xsi_set_current_line(98, ng0);
    t13 = (t0 + 2288);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t17 = (t0 + 2288);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 2472);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t22, 32, 1);
    t23 = (t0 + 2104);
    xsi_vlogvar_assign_value(t23, t16, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB8;

LAB14:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB20:    t2 = (t0 + 2472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB21:    xsi_set_current_line(113, ng0);

LAB23:    xsi_set_current_line(114, ng0);
    t13 = ((char*)((ng9)));
    t14 = (t0 + 228);
    t15 = (t14 + 44U);
    t17 = *((char **)t15);
    t18 = (t0 + 2472);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t16, 1, t13, t17, 2, t20, 32, 1);
    t21 = (t0 + 2104);
    xsi_vlogvar_assign_value(t21, t16, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB20;

LAB26:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 60000000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB32:    t2 = (t0 + 2472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB33:    xsi_set_current_line(129, ng0);

LAB35:    xsi_set_current_line(130, ng0);
    t13 = (t0 + 2288);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t17 = (t0 + 2288);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 2472);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t22, 32, 1);
    t23 = (t0 + 2104);
    xsi_vlogvar_assign_value(t23, t16, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB32;

LAB38:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, 30000000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB2;

}


extern void work_m_00000000000779933481_2788473073_init()
{
	static char *pe[] = {(void *)Cont_50_0,(void *)Initial_70_1,(void *)Initial_71_2,(void *)Always_90_3};
	xsi_register_didat("work_m_00000000000779933481_2788473073", "isim/Empaquetado_total_tb_isim_beh.exe.sim/work/m_00000000000779933481_2788473073.didat");
	xsi_register_executes(pe);
}
