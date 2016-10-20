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
static const char *ng0 = "C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Nueva carpeta/control_salida.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {20U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {26U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {28U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {33U, 0U};
static unsigned int ng16[] = {38U, 0U};
static unsigned int ng17[] = {65U, 0U};
static unsigned int ng18[] = {67U, 0U};
static int ng19[] = {1, 0};



static void Always_40_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
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
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 3280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3620);
    *((int *)t2) = 1;
    t3 = (t0 + 3308);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2756);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2664);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);
    t7 = (t0 + 2572);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t12 = (t9 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB29;

LAB26:    if (t23 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t11) = 1;

LAB29:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB32:    goto LAB25;

LAB9:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2572);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB36;

LAB33:    if (t23 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB39:    goto LAB25;

LAB11:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 2572);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB43;

LAB40:    if (t23 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t11) = 1;

LAB43:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB46:    goto LAB25;

LAB13:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2572);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB50;

LAB47:    if (t23 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t11) = 1;

LAB50:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB53:    goto LAB25;

LAB15:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2572);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng9)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB57;

LAB54:    if (t23 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t11) = 1;

LAB57:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB60:    goto LAB25;

LAB17:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2572);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng11)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB64;

LAB61:    if (t23 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t11) = 1;

LAB64:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB67:    goto LAB25;

LAB19:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2572);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng13)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB71;

LAB68:    if (t23 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t11) = 1;

LAB71:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2756);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB74:    goto LAB25;

LAB21:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2756);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB25;

LAB28:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(45, ng0);
    t33 = ((char*)((ng3)));
    t34 = (t0 + 2756);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    goto LAB32;

LAB35:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(48, ng0);
    t26 = ((char*)((ng4)));
    t27 = (t0 + 2756);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    goto LAB39;

LAB42:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(51, ng0);
    t26 = ((char*)((ng6)));
    t27 = (t0 + 2756);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    goto LAB46;

LAB49:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(54, ng0);
    t26 = ((char*)((ng8)));
    t27 = (t0 + 2756);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    goto LAB53;

LAB56:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(57, ng0);
    t26 = ((char*)((ng10)));
    t27 = (t0 + 2756);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    goto LAB60;

LAB63:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(60, ng0);
    t26 = ((char*)((ng12)));
    t27 = (t0 + 2756);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    goto LAB67;

LAB70:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(63, ng0);
    t26 = ((char*)((ng14)));
    t27 = (t0 + 2756);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    goto LAB74;

}

static void Always_73_1(char *t0)
{
    char t6[8];
    char t18[8];
    char t37[8];
    char t45[8];
    char t81[8];
    char t82[8];
    char t88[8];
    char t92[8];
    char t100[8];
    char t104[8];
    char t112[8];
    char t144[8];
    char t152[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    char *t187;

LAB0:    t1 = (t0 + 3424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3628);
    *((int *)t2) = 1;
    t3 = (t0 + 3452);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1240U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t45, t6, 8);

LAB12:    t73 = (t45 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t45);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(88, ng0);

LAB30:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2572);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 5, t4, 5, t5, 5);
    t12 = (t0 + 2572);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2756);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2664);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB31:    t5 = ((char*)((ng2)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t64 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng3)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t64 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng4)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t64 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng6)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t64 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng8)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t64 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng10)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t64 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng12)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t64 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng14)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t64 == 1)
        goto LAB46;

LAB47:
LAB49:
LAB48:    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB50:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 1332U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t19) == 0)
        goto LAB13;

LAB15:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB16:    t27 = (t18 + 4);
    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    *((unsigned int *)t18) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB18;

LAB17:    t35 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    memset(t37, 0, 8);
    t38 = (t18 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t18);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t38) != 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t6);
    t47 = *((unsigned int *)t37);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = (t6 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB18:    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t18) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB17;

LAB19:    *((unsigned int *)t37) = 1;
    goto LAB22;

LAB21:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t6 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t6);
    t64 = (t63 & t62);
    t65 = *((unsigned int *)t60);
    t66 = (~(t65));
    t67 = *((unsigned int *)t37);
    t68 = (t67 & t66);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t71 & t69);
    t72 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t72 & t70);
    goto LAB25;

LAB26:    xsi_set_current_line(76, ng0);

LAB29:    xsi_set_current_line(77, ng0);
    t79 = ((char*)((ng3)));
    t80 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2572);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2020);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB28;

LAB32:    xsi_set_current_line(92, ng0);

LAB51:    xsi_set_current_line(93, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2020);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t0 + 2112);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB34:    xsi_set_current_line(101, ng0);

LAB52:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t0 + 2112);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB36:    xsi_set_current_line(109, ng0);

LAB53:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t0 + 2112);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB38:    xsi_set_current_line(117, ng0);

LAB54:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t0 + 2112);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB40:    xsi_set_current_line(125, ng0);

LAB55:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t0 + 2112);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB42:    xsi_set_current_line(133, ng0);

LAB56:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 1516U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(145, ng0);

LAB61:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB63;

LAB62:    t12 = (t2 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB65;

LAB64:    *((unsigned int *)t6) = 1;

LAB65:    memset(t18, 0, 8);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t19) != 0)
        goto LAB69;

LAB70:    t26 = (t18 + 4);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t26);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB71;

LAB72:    memcpy(t81, t18, 8);

LAB73:    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t61 = *((unsigned int *)t83);
    t62 = (~(t61));
    t63 = *((unsigned int *)t81);
    t65 = (t63 & t62);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t83) != 0)
        goto LAB88;

LAB89:    t85 = (t82 + 4);
    t67 = *((unsigned int *)t82);
    t69 = (!(t67));
    t70 = *((unsigned int *)t85);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB90;

LAB91:    memcpy(t152, t82, 8);

LAB92:    t180 = (t152 + 4);
    t181 = *((unsigned int *)t180);
    t182 = (~(t181));
    t183 = *((unsigned int *)t152);
    t184 = (t183 & t182);
    t185 = (t184 != 0);
    if (t185 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2020);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB126:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB59:    goto LAB50;

LAB44:    xsi_set_current_line(156, ng0);

LAB127:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2020);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB50;

LAB46:    xsi_set_current_line(164, ng0);

LAB128:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2572);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB50;

LAB57:    xsi_set_current_line(135, ng0);

LAB60:    xsi_set_current_line(136, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2204);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2388);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2020);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1700U);
    t3 = *((char **)t2);
    t2 = (t0 + 2112);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB59;

LAB63:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB65;

LAB67:    *((unsigned int *)t18) = 1;
    goto LAB70;

LAB69:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB70;

LAB71:    t27 = (t0 + 1608U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng16)));
    memset(t37, 0, 8);
    t38 = (t28 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB75;

LAB74:    t44 = (t27 + 4);
    if (*((unsigned int *)t44) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t28) > *((unsigned int *)t27))
        goto LAB77;

LAB76:    *((unsigned int *)t37) = 1;

LAB77:    memset(t45, 0, 8);
    t50 = (t37 + 4);
    t17 = *((unsigned int *)t50);
    t21 = (~(t17));
    t22 = *((unsigned int *)t37);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t50) != 0)
        goto LAB81;

LAB82:    t25 = *((unsigned int *)t18);
    t29 = *((unsigned int *)t45);
    t30 = (t25 & t29);
    *((unsigned int *)t81) = t30;
    t59 = (t18 + 4);
    t60 = (t45 + 4);
    t73 = (t81 + 4);
    t31 = *((unsigned int *)t59);
    t32 = *((unsigned int *)t60);
    t33 = (t31 | t32);
    *((unsigned int *)t73) = t33;
    t34 = *((unsigned int *)t73);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB73;

LAB75:    t49 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB77;

LAB79:    *((unsigned int *)t45) = 1;
    goto LAB82;

LAB81:    t51 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB82;

LAB83:    t36 = *((unsigned int *)t81);
    t39 = *((unsigned int *)t73);
    *((unsigned int *)t81) = (t36 | t39);
    t79 = (t18 + 4);
    t80 = (t45 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (~(t40));
    t42 = *((unsigned int *)t79);
    t43 = (~(t42));
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t80);
    t52 = (~(t48));
    t64 = (t41 & t43);
    t68 = (t47 & t52);
    t53 = (~(t64));
    t54 = (~(t68));
    t55 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t55 & t53);
    t56 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t56 & t54);
    t57 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t57 & t53);
    t58 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t58 & t54);
    goto LAB85;

LAB86:    *((unsigned int *)t82) = 1;
    goto LAB89;

LAB88:    t84 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB89;

LAB90:    t86 = (t0 + 1608U);
    t87 = *((char **)t86);
    t86 = ((char*)((ng17)));
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB94;

LAB93:    t90 = (t86 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB94;

LAB97:    if (*((unsigned int *)t87) < *((unsigned int *)t86))
        goto LAB96;

LAB95:    *((unsigned int *)t88) = 1;

LAB96:    memset(t92, 0, 8);
    t93 = (t88 + 4);
    t72 = *((unsigned int *)t93);
    t74 = (~(t72));
    t75 = *((unsigned int *)t88);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t93) != 0)
        goto LAB100;

LAB101:    t95 = (t92 + 4);
    t78 = *((unsigned int *)t92);
    t96 = *((unsigned int *)t95);
    t97 = (t78 || t96);
    if (t97 > 0)
        goto LAB102;

LAB103:    memcpy(t112, t92, 8);

LAB104:    memset(t144, 0, 8);
    t145 = (t112 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (~(t146));
    t148 = *((unsigned int *)t112);
    t149 = (t148 & t147);
    t150 = (t149 & 1U);
    if (t150 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t145) != 0)
        goto LAB119;

LAB120:    t153 = *((unsigned int *)t82);
    t154 = *((unsigned int *)t144);
    t155 = (t153 | t154);
    *((unsigned int *)t152) = t155;
    t156 = (t82 + 4);
    t157 = (t144 + 4);
    t158 = (t152 + 4);
    t159 = *((unsigned int *)t156);
    t160 = *((unsigned int *)t157);
    t161 = (t159 | t160);
    *((unsigned int *)t158) = t161;
    t162 = *((unsigned int *)t158);
    t163 = (t162 != 0);
    if (t163 == 1)
        goto LAB121;

LAB122:
LAB123:    goto LAB92;

LAB94:    t91 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB96;

LAB98:    *((unsigned int *)t92) = 1;
    goto LAB101;

LAB100:    t94 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB101;

LAB102:    t98 = (t0 + 1608U);
    t99 = *((char **)t98);
    t98 = ((char*)((ng18)));
    memset(t100, 0, 8);
    t101 = (t99 + 4);
    if (*((unsigned int *)t101) != 0)
        goto LAB106;

LAB105:    t102 = (t98 + 4);
    if (*((unsigned int *)t102) != 0)
        goto LAB106;

LAB109:    if (*((unsigned int *)t99) > *((unsigned int *)t98))
        goto LAB108;

LAB107:    *((unsigned int *)t100) = 1;

LAB108:    memset(t104, 0, 8);
    t105 = (t100 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t100);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t105) != 0)
        goto LAB112;

LAB113:    t113 = *((unsigned int *)t92);
    t114 = *((unsigned int *)t104);
    t115 = (t113 & t114);
    *((unsigned int *)t112) = t115;
    t116 = (t92 + 4);
    t117 = (t104 + 4);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t116);
    t120 = *((unsigned int *)t117);
    t121 = (t119 | t120);
    *((unsigned int *)t118) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB104;

LAB106:    t103 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB108;

LAB110:    *((unsigned int *)t104) = 1;
    goto LAB113;

LAB112:    t111 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB113;

LAB114:    t124 = *((unsigned int *)t112);
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t112) = (t124 | t125);
    t126 = (t92 + 4);
    t127 = (t104 + 4);
    t128 = *((unsigned int *)t92);
    t129 = (~(t128));
    t130 = *((unsigned int *)t126);
    t131 = (~(t130));
    t132 = *((unsigned int *)t104);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t140 & t138);
    t141 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t141 & t139);
    t142 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t142 & t138);
    t143 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t143 & t139);
    goto LAB116;

LAB117:    *((unsigned int *)t144) = 1;
    goto LAB120;

LAB119:    t151 = (t144 + 4);
    *((unsigned int *)t144) = 1;
    *((unsigned int *)t151) = 1;
    goto LAB120;

LAB121:    t164 = *((unsigned int *)t152);
    t165 = *((unsigned int *)t158);
    *((unsigned int *)t152) = (t164 | t165);
    t166 = (t82 + 4);
    t167 = (t144 + 4);
    t168 = *((unsigned int *)t166);
    t169 = (~(t168));
    t170 = *((unsigned int *)t82);
    t171 = (t170 & t169);
    t172 = *((unsigned int *)t167);
    t173 = (~(t172));
    t174 = *((unsigned int *)t144);
    t175 = (t174 & t173);
    t176 = (~(t171));
    t177 = (~(t175));
    t178 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t178 & t176);
    t179 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t179 & t177);
    goto LAB123;

LAB124:    xsi_set_current_line(151, ng0);
    t186 = ((char*)((ng19)));
    t187 = (t0 + 2020);
    xsi_vlogvar_wait_assign_value(t187, t186, 0, 0, 1, 0LL);
    goto LAB126;

}


extern void work_m_00000000002708873856_2595569647_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Always_73_1};
	xsi_register_didat("work_m_00000000002708873856_2595569647", "isim/ModuloRTC_tb_isim_beh.exe.sim/work/m_00000000002708873856_2595569647.didat");
	xsi_register_executes(pe);
}
