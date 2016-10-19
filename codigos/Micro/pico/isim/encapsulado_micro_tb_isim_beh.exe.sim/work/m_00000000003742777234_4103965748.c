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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/LuisOrlando/Documents/Proyectos Lab Digitales/Proy_3_grupo_7_II_2016/codigos/Micro/encapsulado_micro_tb.v";
static const char *ng1 = "C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Micro/micro.txt";
static const char *ng2 = "w+";
static const char *ng3 = "dir \t RTC \t VGA \t Tec \t son \t w \t r \n";
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static const char *ng6 = "%d \t %b \t %b \t %b \t %b \t %b \t %b \n";
static unsigned int ng7[] = {11U, 0U};



static void Initial_61_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4096);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
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
    t24 = (t0 + 3048);
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

static void Initial_62_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);

LAB4:    xsi_set_current_line(63, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4344);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Always_78_2(char *t0)
{
    char t15[8];
    char t28[8];
    char t37[8];
    char t50[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5104);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2328U);
    t8 = *((char **)t7);
    t7 = (t0 + 1688U);
    t9 = *((char **)t7);
    t7 = (t0 + 1848U);
    t10 = *((char **)t7);
    t7 = (t0 + 2008U);
    t11 = *((char **)t7);
    t7 = (t0 + 2168U);
    t12 = *((char **)t7);
    t7 = (t0 + 1208U);
    t13 = *((char **)t7);
    t7 = (t0 + 1368U);
    t14 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng6, 8, t0, (char)118, t8, 8, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB9;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    memset(t28, 0, 8);
    t7 = (t15 + 4);
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t15);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t7) != 0)
        goto LAB12;

LAB13:    t9 = (t28 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t9);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB14;

LAB15:    memcpy(t58, t28, 8);

LAB16:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(86, ng0);

LAB32:
LAB30:    goto LAB2;

LAB8:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB12:    t8 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB13;

LAB14:    t10 = (t0 + 2328U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng7)));
    memset(t37, 0, 8);
    t12 = (t11 + 4);
    t13 = (t10 + 4);
    t38 = *((unsigned int *)t11);
    t39 = *((unsigned int *)t10);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t13);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t12);
    t46 = *((unsigned int *)t13);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB20;

LAB17:    if (t47 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t37) = 1;

LAB20:    memset(t50, 0, 8);
    t51 = (t37 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t37);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t51) != 0)
        goto LAB23;

LAB24:    t59 = *((unsigned int *)t28);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t28 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t14 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t50) = 1;
    goto LAB24;

LAB23:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t28 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t28);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB27;

LAB28:    xsi_set_current_line(82, ng0);

LAB31:    xsi_set_current_line(83, ng0);
    t96 = (t0 + 3368);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    xsi_vlogfile_fclose(*((unsigned int *)t98));
    xsi_set_current_line(84, ng0);
    xsi_vlog_finish(1);
    goto LAB30;

}


extern void work_m_00000000003742777234_4103965748_init()
{
	static char *pe[] = {(void *)Initial_61_0,(void *)Initial_62_1,(void *)Always_78_2};
	xsi_register_didat("work_m_00000000003742777234_4103965748", "isim/encapsulado_micro_tb_isim_beh.exe.sim/work/m_00000000003742777234_4103965748.didat");
	xsi_register_executes(pe);
}
