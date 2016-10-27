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
static const char *ng0 = "C:/Users/LuisOrlando/Documents/Proyectos Lab Digitales/Proy_3_grupo_7_II_2016/codigos/controlVGA/VROMswithBlue.v";
static const char *ng1 = "Numeros.png.hex";
static const char *ng2 = "Interfaz.png.hex";
static unsigned int ng3[] = {0U, 0U};



static void Initial_45_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2928);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_50_1(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3088);
    xsi_vlogfile_readmemb(ng2, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_53_2(char *t0)
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

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4824);
    *((int *)t2) = 1;
    t3 = (t0 + 4536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(61, ng0);

LAB10:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3088);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 3088);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1888U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t13, 6, t4, t12, t16, 2, 1, t18, 19, 2);
    t17 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 6, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2928);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2928);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2048U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t13, 6, t4, t12, t16, 2, 1, t18, 15, 2);
    t17 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 6, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2608);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 6, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB8;

}


extern void work_m_00000000003467473111_1205045786_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Initial_50_1,(void *)Always_53_2};
	xsi_register_didat("work_m_00000000003467473111_1205045786", "isim/Empaquetado_total_tb_isim_beh.exe.sim/work/m_00000000003467473111_1205045786.didat");
	xsi_register_executes(pe);
}
