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
static const char *ng0 = "C:/Users/LuisOrlando/Documents/Proyectos Lab Digitales/Proy_3_grupo_7_II_2016/codigos/controlVGA/ControlSalidaVGA.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 0U};



static void Always_32_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t31[8];
    char t44[8];
    char t55[8];
    char t71[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
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
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 4);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t32) != 0)
        goto LAB12;

LAB13:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB14;

LAB15:    memcpy(t79, t31, 8);

LAB16:    t107 = (t79 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB30:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB34;

LAB31:    if (t27 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t15) = 1;

LAB34:    memset(t31, 0, 8);
    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t17) != 0)
        goto LAB37;

LAB38:    t32 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB39;

LAB40:    memcpy(t79, t31, 8);

LAB41:    t93 = (t79 + 4);
    t108 = *((unsigned int *)t93);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB55:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB59;

LAB56:    if (t27 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t15) = 1;

LAB59:    memset(t31, 0, 8);
    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t17) != 0)
        goto LAB62;

LAB63:    t32 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB64;

LAB65:    memcpy(t79, t31, 8);

LAB66:    t93 = (t79 + 4);
    t108 = *((unsigned int *)t93);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB80:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB12:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB13;

LAB14:    t45 = (t0 + 1048U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 4);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 4);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 3U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 3U);
    t54 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t56 = (t44 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB20;

LAB17:    if (t67 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t55) = 1;

LAB20:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t72) != 0)
        goto LAB23;

LAB24:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = (t31 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t71) = 1;
    goto LAB24;

LAB23:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB24;

LAB25:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t31 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t94);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t105 & t103);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    goto LAB27;

LAB28:    xsi_set_current_line(36, ng0);
    t113 = ((char*)((ng3)));
    t114 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t114, t113, 0, 0, 1, 0LL);
    goto LAB30;

LAB33:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t31) = 1;
    goto LAB38;

LAB37:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB38;

LAB39:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t44, 0, 8);
    t38 = (t44 + 4);
    t45 = (t39 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (t48 >> 2);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 2);
    *((unsigned int *)t38) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 3U);
    t53 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t53 & 3U);
    t46 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t47 = (t44 + 4);
    t54 = (t46 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t46);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t47);
    t62 = *((unsigned int *)t54);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t47);
    t66 = *((unsigned int *)t54);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB45;

LAB42:    if (t67 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t55) = 1;

LAB45:    memset(t71, 0, 8);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t57);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t57) != 0)
        goto LAB48;

LAB49:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t72 = (t31 + 4);
    t78 = (t71 + 4);
    t83 = (t79 + 4);
    t86 = *((unsigned int *)t72);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t83);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t71) = 1;
    goto LAB49;

LAB48:    t70 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB49;

LAB50:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t83);
    *((unsigned int *)t79) = (t91 | t92);
    t84 = (t31 + 4);
    t85 = (t71 + 4);
    t95 = *((unsigned int *)t84);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t85);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t105 & t103);
    t106 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t106 & t104);
    goto LAB52;

LAB53:    xsi_set_current_line(41, ng0);
    t94 = ((char*)((ng3)));
    t107 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t107, t94, 0, 0, 1, 0LL);
    goto LAB55;

LAB58:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t31) = 1;
    goto LAB63;

LAB62:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB63;

LAB64:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t44, 0, 8);
    t38 = (t44 + 4);
    t45 = (t39 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (t48 >> 0);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 0);
    *((unsigned int *)t38) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 3U);
    t53 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t53 & 3U);
    t46 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t47 = (t44 + 4);
    t54 = (t46 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t46);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t47);
    t62 = *((unsigned int *)t54);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t47);
    t66 = *((unsigned int *)t54);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB70;

LAB67:    if (t67 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t55) = 1;

LAB70:    memset(t71, 0, 8);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t57);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t57) != 0)
        goto LAB73;

LAB74:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t72 = (t31 + 4);
    t78 = (t71 + 4);
    t83 = (t79 + 4);
    t86 = *((unsigned int *)t72);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t83);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t71) = 1;
    goto LAB74;

LAB73:    t70 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB74;

LAB75:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t83);
    *((unsigned int *)t79) = (t91 | t92);
    t84 = (t31 + 4);
    t85 = (t71 + 4);
    t95 = *((unsigned int *)t84);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t85);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t105 & t103);
    t106 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t106 & t104);
    goto LAB77;

LAB78:    xsi_set_current_line(46, ng0);
    t94 = ((char*)((ng3)));
    t107 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t107, t94, 0, 0, 1, 0LL);
    goto LAB80;

}

static void Always_52_1(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1208U);
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
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (t6 >> 4);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 4);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t18 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t18 & 3U);
    xsi_vlogtype_concat(t13, 4, 4, 3U, t14, 2, t12, 1, t4, 1);
    t19 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (t6 >> 2);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 2);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t18 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t18 & 3U);
    xsi_vlogtype_concat(t13, 4, 4, 3U, t14, 2, t12, 1, t4, 1);
    t19 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t18 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t18 & 3U);
    xsi_vlogtype_concat(t13, 4, 4, 3U, t14, 2, t12, 1, t4, 1);
    t19 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

}


extern void work_m_00000000002921844518_0119779712_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Always_52_1};
	xsi_register_didat("work_m_00000000002921844518_0119779712", "isim/Empaquetado_total_tb_isim_beh.exe.sim/work/m_00000000002921844518_0119779712.didat");
	xsi_register_executes(pe);
}
