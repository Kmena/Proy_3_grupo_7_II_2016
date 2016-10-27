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
static const char *ng0 = "C:/Users/User/Documents/Proy_3_grupo_7_II_2016/codigos/teclado/build/1.0/PS2Receiver.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static int ng9[] = {7, 0};
static int ng10[] = {8, 0};
static int ng11[] = {9, 0};
static unsigned int ng12[] = {1U, 0U};
static int ng13[] = {10, 0};
static unsigned int ng14[] = {240U, 0U};
static int ng15[] = {15, 0};



static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB1:    return;
}

static void Always_55_1(char *t0)
{
    char t13[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2808);
    *((int *)t2) = 1;
    t3 = (t0 + 2352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1472);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t9 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t6, 4, t9, 32);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 32);
    if (t8 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t13, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB47;

LAB46:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB49;

LAB48:    *((unsigned int *)t13) = 1;

LAB49:    t12 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t21 = (~(t19));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t13, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t19 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t19 ^ t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    t26 = (t23 ^ t24);
    t27 = (t22 | t26);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t9);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB57;

LAB54:    if (t30 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t13) = 1;

LAB57:    t12 = (t13 + 4);
    t33 = *((unsigned int *)t12);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB58;

LAB59:
LAB60:
LAB53:    goto LAB2;

LAB7:    goto LAB29;

LAB9:    xsi_set_current_line(58, ng0);
    t11 = (t0 + 1060U);
    t12 = *((char **)t11);
    t11 = (t0 + 1288);
    t14 = (t0 + 1288);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB30;

LAB31:    goto LAB29;

LAB11:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t7 = (t5 + 44U);
    t9 = *((char **)t7);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t9, 2, t11, 32, 1);
    t12 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t10 = (!(t19));
    if (t10 == 1)
        goto LAB32;

LAB33:    goto LAB29;

LAB13:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t7 = (t5 + 44U);
    t9 = *((char **)t7);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t13, t9, 2, t11, 32, 1);
    t12 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t10 = (!(t19));
    if (t10 == 1)
        goto LAB34;

LAB35:    goto LAB29;

LAB15:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t7 = (t5 + 44U);
    t9 = *((char **)t7);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t13, t9, 2, t11, 32, 1);
    t12 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t10 = (!(t19));
    if (t10 == 1)
        goto LAB36;

LAB37:    goto LAB29;

LAB17:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t7 = (t5 + 44U);
    t9 = *((char **)t7);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t13, t9, 2, t11, 32, 1);
    t12 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t10 = (!(t19));
    if (t10 == 1)
        goto LAB38;

LAB39:    goto LAB29;

LAB19:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t7 = (t5 + 44U);
    t9 = *((char **)t7);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t13, t9, 2, t11, 32, 1);
    t12 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t10 = (!(t19));
    if (t10 == 1)
        goto LAB40;

LAB41:    goto LAB29;

LAB21:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t7 = (t5 + 44U);
    t9 = *((char **)t7);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t13, t9, 2, t11, 32, 1);
    t12 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t10 = (!(t19));
    if (t10 == 1)
        goto LAB42;

LAB43:    goto LAB29;

LAB23:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 1288);
    t5 = (t0 + 1288);
    t7 = (t5 + 44U);
    t9 = *((char **)t7);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t13, t9, 2, t11, 32, 1);
    t12 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t10 = (!(t19));
    if (t10 == 1)
        goto LAB44;

LAB45:    goto LAB29;

LAB25:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB31;

LAB32:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB33;

LAB34:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB35;

LAB36:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB45;

LAB47:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB49;

LAB51:    xsi_set_current_line(70, ng0);
    t14 = (t0 + 1472);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng12)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 4, t16, 4, t17, 4);
    t18 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t18, t25, 0, 0, 4, 0LL);
    goto LAB53;

LAB56:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(71, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 4, 0LL);
    goto LAB60;

}

static void Always_75_2(char *t0)
{
    char t10[8];
    char t32[8];
    char t45[8];
    char t69[8];
    char t70[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    int t79;
    char *t80;
    unsigned int t81;
    int t82;
    int t83;
    char *t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2816);
    *((int *)t2) = 1;
    t3 = (t0 + 2496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1380);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1288);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB7;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB9:    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB7:    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB8:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(76, ng0);

LAB13:    xsi_set_current_line(77, ng0);
    t33 = (t0 + 1564);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 8);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 8);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 255U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 255U);
    t44 = ((char*)((ng14)));
    memset(t45, 0, 8);
    t46 = (t32 + 4);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t32);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB17;

LAB14:    if (t57 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t45) = 1;

LAB17:    t61 = (t45 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t45);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(84, ng0);

LAB26:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng15)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t10, t32, t45, ((int*)(t8)), 2, t9, 32, 1, t11, 32, 1);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t12);
    t79 = (!(t13));
    t25 = (t32 + 4);
    t14 = *((unsigned int *)t25);
    t82 = (!(t14));
    t83 = (t79 && t82);
    t26 = (t45 + 4);
    t15 = *((unsigned int *)t26);
    t86 = (!(t15));
    t87 = (t83 && t86);
    if (t87 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng9)));
    t11 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t10, t32, t45, ((int*)(t8)), 2, t9, 32, 1, t11, 32, 1);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t12);
    t79 = (!(t13));
    t25 = (t32 + 4);
    t14 = *((unsigned int *)t25);
    t82 = (!(t14));
    t83 = (t79 && t82);
    t26 = (t45 + 4);
    t15 = *((unsigned int *)t26);
    t86 = (!(t15));
    t87 = (t83 && t86);
    if (t87 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB20:    goto LAB12;

LAB16:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(78, ng0);

LAB21:    xsi_set_current_line(79, ng0);
    t67 = ((char*)((ng1)));
    t68 = (t0 + 1564);
    t72 = (t0 + 1564);
    t73 = (t72 + 44U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng15)));
    t76 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t69, t70, t71, ((int*)(t74)), 2, t75, 32, 1, t76, 32, 1);
    t77 = (t69 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (!(t78));
    t80 = (t70 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (!(t81));
    t83 = (t79 && t82);
    t84 = (t71 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (!(t85));
    t87 = (t83 && t86);
    if (t87 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng9)));
    t11 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t10, t32, t45, ((int*)(t8)), 2, t9, 32, 1, t11, 32, 1);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t12);
    t79 = (!(t13));
    t25 = (t32 + 4);
    t14 = *((unsigned int *)t25);
    t82 = (!(t14));
    t83 = (t79 && t82);
    t26 = (t45 + 4);
    t15 = *((unsigned int *)t26);
    t86 = (!(t15));
    t87 = (t83 && t86);
    if (t87 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB20;

LAB22:    t88 = *((unsigned int *)t71);
    t89 = (t88 + 0);
    t90 = *((unsigned int *)t69);
    t91 = *((unsigned int *)t70);
    t92 = (t90 - t91);
    t93 = (t92 + 1);
    xsi_vlogvar_wait_assign_value(t68, t67, t89, *((unsigned int *)t70), t93, 0LL);
    goto LAB23;

LAB24:    t16 = *((unsigned int *)t45);
    t89 = (t16 + 0);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t32);
    t92 = (t17 - t18);
    t93 = (t92 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t89, *((unsigned int *)t32), t93, 0LL);
    goto LAB25;

LAB27:    t16 = *((unsigned int *)t45);
    t89 = (t16 + 0);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t32);
    t92 = (t17 - t18);
    t93 = (t92 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t89, *((unsigned int *)t32), t93, 0LL);
    goto LAB28;

LAB29:    t16 = *((unsigned int *)t45);
    t89 = (t16 + 0);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t32);
    t92 = (t17 - t18);
    t93 = (t92 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, t89, *((unsigned int *)t32), t93, 0LL);
    goto LAB30;

}

static void Cont_92_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2868);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 2824);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001547057082_2828517078_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_55_1,(void *)Always_75_2,(void *)Cont_92_3};
	xsi_register_didat("work_m_00000000001547057082_2828517078", "isim/Empaquetado_total_tb_isim_beh.exe.sim/work/m_00000000001547057082_2828517078.didat");
	xsi_register_executes(pe);
}
