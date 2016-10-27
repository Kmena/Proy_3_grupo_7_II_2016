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
static const char *ng0 = "C:/Users/User/Documents/Proy_3_grupo_7_II_2016/codigos/teclado/build/1.0/Keyboard.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Always_47_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2468);
    *((int *)t2) = 1;
    t3 = (t0 + 2300);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(50, ng0);
    t7 = (t0 + 1520U);
    t8 = *((char **)t7);
    t7 = (t0 + 1748);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB17;

LAB9:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1428U);
    t4 = *((char **)t3);
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    goto LAB17;

LAB11:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1336U);
    t4 = *((char **)t3);
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    goto LAB17;

LAB13:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB17;

}


extern void work_m_00000000000863579276_3435472415_init()
{
	static char *pe[] = {(void *)Always_47_0};
	xsi_register_didat("work_m_00000000000863579276_3435472415", "isim/Empaquetado_total_tb_isim_beh.exe.sim/work/m_00000000000863579276_3435472415.didat");
	xsi_register_executes(pe);
}
