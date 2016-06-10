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
static const char *ng0 = "C:/Users/nimer/Documents/Verilog Projects/LED_Effect/FSM.v";
static unsigned int ng1[] = {16U, 0U};
static unsigned int ng2[] = {80U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {144U, 0U};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {48U, 0U};
static unsigned int ng7[] = {112U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {128U, 0U};
static unsigned int ng14[] = {4U, 0U};
static int ng15[] = {1818584179, 0, 1852404831, 0, 105, 0, 0, 0, 0, 0};
static int ng16[] = {1818584179, 0, 1701014367, 0, 25448, 0, 0, 0, 0, 0};
static int ng17[] = {1853121906, 0, 1600352117, 0, 1768843636, 0, 0, 0, 0, 0};
static int ng18[] = {1768778100, 0, 1701076844, 0, 1769234284, 0, 26990, 0, 0, 0};
static int ng19[] = {1718838644, 0, 1952411494, 0, 1936222566, 0, 1852404831, 0, 105, 0};
static int ng20[] = {1853121906, 0, 1600352117, 0, 7562612, 0, 0, 0, 0, 0};
static int ng21[] = {1818584179, 0, 1936028767, 0, 0, 0, 0, 0, 0, 0};
static int ng22[] = {1600939364, 0, 1751737972, 0, 115, 0, 0, 0, 0, 0};
static int ng23[] = {1937010544, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng24[] = {1853121906, 0, 1950576501, 0, 7823721, 0, 0, 0, 0, 0};
static int ng25[] = {1482184792, 0, 1482184792, 0, 1482184792, 0, 1482184792, 0, 88, 0};



static void Always_39_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 3624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4972);
    *((int *)t2) = 1;
    t3 = (t0 + 3652);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2916);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 3008);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);

LAB28:    xsi_set_current_line(44, ng0);

LAB29:    xsi_set_current_line(45, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 3008);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB27;

LAB9:    xsi_set_current_line(48, ng0);

LAB30:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 2044U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t3) == 0)
        goto LAB31;

LAB33:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB34:    t7 = (t9 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2044U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB39;

LAB40:
LAB41:
LAB37:    goto LAB27;

LAB11:    xsi_set_current_line(57, ng0);

LAB43:    xsi_set_current_line(58, ng0);

LAB44:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB27;

LAB13:    xsi_set_current_line(62, ng0);

LAB45:    xsi_set_current_line(63, ng0);

LAB46:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB27;

LAB15:    xsi_set_current_line(67, ng0);

LAB47:    xsi_set_current_line(68, ng0);

LAB48:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB27;

LAB17:    xsi_set_current_line(72, ng0);

LAB49:    xsi_set_current_line(73, ng0);

LAB50:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 3008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB27;

LAB19:    xsi_set_current_line(77, ng0);

LAB51:    xsi_set_current_line(78, ng0);

LAB52:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB27;

LAB21:    xsi_set_current_line(82, ng0);

LAB53:    xsi_set_current_line(83, ng0);

LAB54:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB27;

LAB23:    xsi_set_current_line(87, ng0);

LAB55:    xsi_set_current_line(88, ng0);

LAB56:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3008);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 8);
    goto LAB27;

LAB25:    xsi_set_current_line(92, ng0);

LAB57:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 2136U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB61;

LAB59:    if (*((unsigned int *)t3) == 0)
        goto LAB58;

LAB60:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB61:    t7 = (t9 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB66;

LAB67:
LAB68:
LAB64:    goto LAB27;

LAB31:    *((unsigned int *)t9) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(50, ng0);

LAB38:    xsi_set_current_line(51, ng0);
    t20 = ((char*)((ng4)));
    t21 = (t0 + 3008);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    goto LAB37;

LAB39:    xsi_set_current_line(53, ng0);

LAB42:    xsi_set_current_line(54, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 3008);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB41;

LAB58:    *((unsigned int *)t9) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(94, ng0);

LAB65:    xsi_set_current_line(95, ng0);
    t20 = ((char*)((ng10)));
    t21 = (t0 + 3008);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    goto LAB64;

LAB66:    xsi_set_current_line(97, ng0);

LAB69:    xsi_set_current_line(98, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 3008);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB68;

}

static void Cont_105_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5080);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4980);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_106_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5116);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4988);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_107_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5152);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 4996);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_108_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5188);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5004);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_109_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 5224);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 5012);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_112_6(char *t0)
{
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

LAB0:    t1 = (t0 + 4488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5020);
    *((int *)t2) = 1;
    t3 = (t0 + 4516);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB5:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 1492U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3008);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2916);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(114, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2916);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

}

static void Always_120_7(char *t0)
{
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
    int t13;

LAB0:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5028);
    *((int *)t2) = 1;
    t3 = (t0 + 4660);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 1492U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(135, ng0);

LAB10:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2364);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2548);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2732);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3008);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t13 == 1)
        goto LAB24;

LAB25:
LAB26:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(121, ng0);

LAB9:    xsi_set_current_line(123, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2824);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2364);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2548);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2732);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(143, ng0);

LAB27:    xsi_set_current_line(144, ng0);
    t11 = ((char*)((ng10)));
    t12 = (t0 + 2640);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB26;

LAB14:    xsi_set_current_line(146, ng0);

LAB28:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 2824);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB26;

LAB16:    xsi_set_current_line(150, ng0);

LAB29:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2640);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2548);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB26;

LAB18:    xsi_set_current_line(154, ng0);

LAB30:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 2640);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2548);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB26;

LAB20:    xsi_set_current_line(158, ng0);

LAB31:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 2640);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2548);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB26;

LAB22:    xsi_set_current_line(162, ng0);

LAB32:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2364);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB26;

LAB24:    xsi_set_current_line(165, ng0);

LAB33:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 2824);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2732);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB26;

}

static void Always_177_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 5036);
    *((int *)t2) = 1;
    t3 = (t0 + 4804);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(177, ng0);

LAB5:    xsi_set_current_line(178, ng0);
    t4 = (t0 + 2916);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t7, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3100);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 136);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(180, ng0);
    t9 = ((char*)((ng15)));
    t10 = (t0 + 3100);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 136);
    goto LAB29;

LAB9:    xsi_set_current_line(182, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

LAB11:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

LAB13:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

LAB15:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

LAB17:    xsi_set_current_line(190, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

LAB19:    xsi_set_current_line(192, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

LAB21:    xsi_set_current_line(194, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

LAB23:    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

LAB25:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 3100);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 136);
    goto LAB29;

}


extern void work_m_00000000004012058038_4020927633_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Cont_105_1,(void *)Cont_106_2,(void *)Cont_107_3,(void *)Cont_108_4,(void *)Cont_109_5,(void *)Always_112_6,(void *)Always_120_7,(void *)Always_177_8};
	xsi_register_didat("work_m_00000000004012058038_4020927633", "isim/gppm_top_test_isim_beh.exe.sim/work/m_00000000004012058038_4020927633.didat");
	xsi_register_executes(pe);
}
