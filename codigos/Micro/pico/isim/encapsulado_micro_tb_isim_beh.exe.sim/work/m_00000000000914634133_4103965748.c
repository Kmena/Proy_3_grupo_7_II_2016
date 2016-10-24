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
static const char *ng0 = "C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Micro/encapsulado_micro_tb.v";
static const char *ng1 = "C:/Users/User/Documents/Proyecto_3_grupo_7_II_2016/codigos/Micro/micro.txt";
static const char *ng2 = "w+";
static const char *ng3 = "dato \t dir \t RTC \t VGA \t Tec \t son \t w \t r \n";
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {0, 0};
static const char *ng6 = "%d \t %d \t %b \t %b \t %b \t %b \t %b \t %b \n";
static int ng7[] = {1, 0};



static void Initial_67_0(char *t0)
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

LAB0:    t1 = (t0 + 2640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);

LAB4:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2540);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1932);
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
    t24 = (t0 + 1932);
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

static void Initial_68_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);

LAB4:    xsi_set_current_line(70, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 2116);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2116);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1840);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1932);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2684);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Always_84_2(char *t0)
{
    char t16[8];
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
    char *t15;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3124);
    *((int *)t2) = 1;
    t3 = (t0 + 2956);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 2116);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 1336U);
    t9 = *((char **)t7);
    t7 = (t0 + 968U);
    t10 = *((char **)t7);
    t7 = (t0 + 1060U);
    t11 = *((char **)t7);
    t7 = (t0 + 1152U);
    t12 = *((char **)t7);
    t7 = (t0 + 1244U);
    t13 = *((char **)t7);
    t7 = (t0 + 692U);
    t14 = *((char **)t7);
    t7 = (t0 + 784U);
    t15 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng6, 9, t0, (char)118, t8, 8, (char)118, t9, 8, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t2);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t5);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB9;

LAB6:    if (t26 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t16) = 1;

LAB9:    t7 = (t16 + 4);
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t16);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(92, ng0);

LAB14:
LAB12:    goto LAB2;

LAB8:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(88, ng0);

LAB13:    xsi_set_current_line(89, ng0);
    t8 = (t0 + 2116);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    xsi_vlogfile_fclose(*((unsigned int *)t10));
    xsi_set_current_line(90, ng0);
    xsi_vlog_finish(1);
    goto LAB12;

}


extern void work_m_00000000000914634133_4103965748_init()
{
	static char *pe[] = {(void *)Initial_67_0,(void *)Initial_68_1,(void *)Always_84_2};
	xsi_register_didat("work_m_00000000000914634133_4103965748", "isim/encapsulado_micro_tb_isim_beh.exe.sim/work/m_00000000000914634133_4103965748.didat");
	xsi_register_executes(pe);
}
