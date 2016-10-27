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
static const char *ng0 = "C:/Users/User/Documents/Proy_3_grupo_7_II_2016/codigos/teclado/build/1.0/Decodificador_Keyboard_ID.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Always_17_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1548);
    *((int *)t2) = 1;
    t3 = (t0 + 1380);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);

LAB6:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB7:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB16:    goto LAB2;

LAB8:    xsi_set_current_line(21, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 828);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    goto LAB16;

LAB10:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB16;

LAB12:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    goto LAB16;

}


extern void work_m_00000000000035168177_3352826008_init()
{
	static char *pe[] = {(void *)Always_17_0};
	xsi_register_didat("work_m_00000000000035168177_3352826008", "isim/Empaquetado_total_tb_isim_beh.exe.sim/work/m_00000000000035168177_3352826008.didat");
	xsi_register_executes(pe);
}
