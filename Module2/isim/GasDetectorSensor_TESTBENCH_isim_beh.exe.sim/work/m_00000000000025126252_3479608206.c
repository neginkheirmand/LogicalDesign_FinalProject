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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/venus/Desktop/uni2/3rd_SEMESTER/madar mantegh/FinalProject/Module2/GasDetectorSensor.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static int ng12[] = {1, 0};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static int ng15[] = {2, 0};



static void Always_28_0(char *t0)
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
    unsigned int t19;
    int t20;
    int t21;
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

LAB0:    t1 = (t0 + 7384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 8200);
    *((int *)t2) = 1;
    t3 = (t0 + 7416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 5264U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);

LAB12:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB13:    t5 = ((char*)((ng1)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t20 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng11)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5984);
    t14 = (t0 + 5984);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB8;

LAB10:    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t13), 1);
    goto LAB11;

LAB14:    xsi_set_current_line(39, ng0);

LAB35:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5984);
    t14 = (t0 + 5984);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB34;

LAB16:    xsi_set_current_line(47, ng0);

LAB42:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t2) == 0)
        goto LAB45;

LAB47:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB48:    t11 = (t13 + 4);
    t12 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t22 = (~(t19));
    *((unsigned int *)t13) = t22;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB50;

LAB49:    t27 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t27 & 1U);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t14 = (t13 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB34;

LAB18:    xsi_set_current_line(54, ng0);

LAB55:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB60:    goto LAB34;

LAB20:    xsi_set_current_line(62, ng0);

LAB62:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB67:    goto LAB34;

LAB22:    xsi_set_current_line(70, ng0);

LAB69:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB74:    goto LAB34;

LAB24:    xsi_set_current_line(78, ng0);

LAB76:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB77;

LAB78:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB81:    goto LAB34;

LAB26:    xsi_set_current_line(86, ng0);

LAB83:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB84;

LAB85:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB88:    goto LAB34;

LAB28:    xsi_set_current_line(94, ng0);

LAB90:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB91;

LAB92:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB95:    goto LAB34;

LAB30:    xsi_set_current_line(102, ng0);

LAB97:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB98;

LAB99:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB102:    goto LAB34;

LAB32:    xsi_set_current_line(110, ng0);

LAB104:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 5584U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(117, ng0);

LAB111:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5984);
    t5 = (t0 + 5984);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB112;

LAB113:
LAB107:    goto LAB34;

LAB36:    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t13), 1);
    goto LAB37;

LAB38:    xsi_set_current_line(42, ng0);

LAB41:    xsi_set_current_line(43, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6144);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB40;

LAB43:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB44;

LAB45:    *((unsigned int *)t13) = 1;
    goto LAB48;

LAB50:    t23 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t23 | t24);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t25 | t26);
    goto LAB49;

LAB51:    xsi_set_current_line(50, ng0);

LAB54:    xsi_set_current_line(51, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 6144);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    goto LAB53;

LAB56:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB57;

LAB58:    xsi_set_current_line(57, ng0);

LAB61:    xsi_set_current_line(58, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 6144);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB60;

LAB63:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB64;

LAB65:    xsi_set_current_line(65, ng0);

LAB68:    xsi_set_current_line(66, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 6144);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB67;

LAB70:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB71;

LAB72:    xsi_set_current_line(73, ng0);

LAB75:    xsi_set_current_line(74, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 6144);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB74;

LAB77:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB78;

LAB79:    xsi_set_current_line(81, ng0);

LAB82:    xsi_set_current_line(82, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6144);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB81;

LAB84:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB85;

LAB86:    xsi_set_current_line(89, ng0);

LAB89:    xsi_set_current_line(90, ng0);
    t5 = ((char*)((ng9)));
    t11 = (t0 + 6144);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB88;

LAB91:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB92;

LAB93:    xsi_set_current_line(97, ng0);

LAB96:    xsi_set_current_line(98, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 6144);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB95;

LAB98:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB99;

LAB100:    xsi_set_current_line(105, ng0);

LAB103:    xsi_set_current_line(106, ng0);
    t5 = ((char*)((ng11)));
    t11 = (t0 + 6144);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB102;

LAB105:    xsi_set_current_line(112, ng0);

LAB108:    xsi_set_current_line(113, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 6144);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5984);
    t5 = (t0 + 5984);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB109;

LAB110:    goto LAB107;

LAB109:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB110;

LAB112:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB113;

}

static void Always_136_1(char *t0)
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
    unsigned int t19;
    int t20;
    int t21;
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

LAB0:    t1 = (t0 + 7632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 8216);
    *((int *)t2) = 1;
    t3 = (t0 + 7664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);

LAB5:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 5264U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(144, ng0);

LAB12:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB13:    t5 = ((char*)((ng1)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t20 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng11)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng13)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng14)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB36;

LAB37:
LAB38:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(139, ng0);

LAB9:    xsi_set_current_line(140, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5984);
    t14 = (t0 + 5984);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB8;

LAB10:    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t13), 1);
    goto LAB11;

LAB14:    xsi_set_current_line(146, ng0);

LAB39:    xsi_set_current_line(147, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5984);
    t14 = (t0 + 5984);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB38;

LAB16:    xsi_set_current_line(154, ng0);

LAB46:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t2) == 0)
        goto LAB49;

LAB51:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB52:    t11 = (t13 + 4);
    t12 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t22 = (~(t19));
    *((unsigned int *)t13) = t22;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB54;

LAB53:    t27 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t27 & 1U);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t14 = (t13 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB38;

LAB18:    xsi_set_current_line(161, ng0);

LAB59:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB64:    goto LAB38;

LAB20:    xsi_set_current_line(169, ng0);

LAB66:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB71:    goto LAB38;

LAB22:    xsi_set_current_line(177, ng0);

LAB73:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB78:    goto LAB38;

LAB24:    xsi_set_current_line(185, ng0);

LAB80:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB85:    goto LAB38;

LAB26:    xsi_set_current_line(193, ng0);

LAB87:    xsi_set_current_line(194, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB88;

LAB89:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB92:    goto LAB38;

LAB28:    xsi_set_current_line(201, ng0);

LAB94:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB95;

LAB96:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB99:    goto LAB38;

LAB30:    xsi_set_current_line(209, ng0);

LAB101:    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB102;

LAB103:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB106:    goto LAB38;

LAB32:    xsi_set_current_line(217, ng0);

LAB108:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB109;

LAB110:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB113:    goto LAB38;

LAB34:    xsi_set_current_line(225, ng0);

LAB115:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB116;

LAB117:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB120:    goto LAB38;

LAB36:    xsi_set_current_line(233, ng0);

LAB122:    xsi_set_current_line(234, ng0);
    t3 = (t0 + 5584U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB123;

LAB124:    xsi_set_current_line(240, ng0);

LAB129:    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5984);
    t5 = (t0 + 5984);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB130;

LAB131:
LAB125:    goto LAB38;

LAB40:    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t13), 1);
    goto LAB41;

LAB42:    xsi_set_current_line(149, ng0);

LAB45:    xsi_set_current_line(150, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB44;

LAB47:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB48;

LAB49:    *((unsigned int *)t13) = 1;
    goto LAB52;

LAB54:    t23 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t23 | t24);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t25 | t26);
    goto LAB53;

LAB55:    xsi_set_current_line(157, ng0);

LAB58:    xsi_set_current_line(158, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 6304);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    goto LAB57;

LAB60:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB61;

LAB62:    xsi_set_current_line(164, ng0);

LAB65:    xsi_set_current_line(165, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB64;

LAB67:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB68;

LAB69:    xsi_set_current_line(172, ng0);

LAB72:    xsi_set_current_line(173, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB71;

LAB74:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB75;

LAB76:    xsi_set_current_line(180, ng0);

LAB79:    xsi_set_current_line(181, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB78;

LAB81:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB82;

LAB83:    xsi_set_current_line(188, ng0);

LAB86:    xsi_set_current_line(189, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB85;

LAB88:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB89;

LAB90:    xsi_set_current_line(196, ng0);

LAB93:    xsi_set_current_line(197, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB92;

LAB95:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB96;

LAB97:    xsi_set_current_line(204, ng0);

LAB100:    xsi_set_current_line(205, ng0);
    t5 = ((char*)((ng10)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB99;

LAB102:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB103;

LAB104:    xsi_set_current_line(212, ng0);

LAB107:    xsi_set_current_line(213, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB106;

LAB109:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB110;

LAB111:    xsi_set_current_line(220, ng0);

LAB114:    xsi_set_current_line(221, ng0);
    t5 = ((char*)((ng5)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB113;

LAB116:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB117;

LAB118:    xsi_set_current_line(228, ng0);

LAB121:    xsi_set_current_line(229, ng0);
    t5 = ((char*)((ng14)));
    t11 = (t0 + 6304);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB120;

LAB123:    xsi_set_current_line(235, ng0);

LAB126:    xsi_set_current_line(236, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6304);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5984);
    t5 = (t0 + 5984);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB127;

LAB128:    goto LAB125;

LAB127:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB128;

LAB130:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB131;

}

static void Always_258_2(char *t0)
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
    unsigned int t19;
    int t20;
    int t21;
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

LAB0:    t1 = (t0 + 7880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 8232);
    *((int *)t2) = 1;
    t3 = (t0 + 7912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(259, ng0);

LAB5:    xsi_set_current_line(260, ng0);
    t4 = (t0 + 5264U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(266, ng0);

LAB12:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 6464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB13:    t5 = ((char*)((ng1)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t20 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t20 == 1)
        goto LAB30;

LAB31:
LAB32:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(261, ng0);

LAB9:    xsi_set_current_line(262, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5984);
    t14 = (t0 + 5984);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB8;

LAB10:    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t13), 1);
    goto LAB11;

LAB14:    xsi_set_current_line(268, ng0);

LAB33:    xsi_set_current_line(269, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5984);
    t14 = (t0 + 5984);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(270, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB32;

LAB16:    xsi_set_current_line(276, ng0);

LAB40:    xsi_set_current_line(277, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(278, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t2) == 0)
        goto LAB43;

LAB45:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB46:    t11 = (t13 + 4);
    t12 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t22 = (~(t19));
    *((unsigned int *)t13) = t22;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB48;

LAB47:    t27 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t27 & 1U);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t14 = (t13 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB32;

LAB18:    xsi_set_current_line(283, ng0);

LAB53:    xsi_set_current_line(284, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(285, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB58:    goto LAB32;

LAB20:    xsi_set_current_line(291, ng0);

LAB60:    xsi_set_current_line(292, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(293, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB65:    goto LAB32;

LAB22:    xsi_set_current_line(299, ng0);

LAB67:    xsi_set_current_line(300, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB72:    goto LAB32;

LAB24:    xsi_set_current_line(307, ng0);

LAB74:    xsi_set_current_line(308, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB75;

LAB76:    xsi_set_current_line(309, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(313, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB79:    goto LAB32;

LAB26:    xsi_set_current_line(315, ng0);

LAB81:    xsi_set_current_line(316, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB82;

LAB83:    xsi_set_current_line(317, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB86:    goto LAB32;

LAB28:    xsi_set_current_line(323, ng0);

LAB88:    xsi_set_current_line(324, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 5984);
    t11 = (t0 + 5984);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t14, 2, t15, 32, 1);
    t16 = (t13 + 4);
    t6 = *((unsigned int *)t16);
    t21 = (!(t6));
    if (t21 == 1)
        goto LAB89;

LAB90:    xsi_set_current_line(325, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(329, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB93:    goto LAB32;

LAB30:    xsi_set_current_line(331, ng0);

LAB95:    xsi_set_current_line(332, ng0);
    t3 = (t0 + 5584U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(338, ng0);

LAB102:    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5984);
    t5 = (t0 + 5984);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB103;

LAB104:
LAB98:    goto LAB32;

LAB34:    xsi_vlogvar_assign_value(t12, t11, 0, *((unsigned int *)t13), 1);
    goto LAB35;

LAB36:    xsi_set_current_line(271, ng0);

LAB39:    xsi_set_current_line(272, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6464);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB38;

LAB41:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB42;

LAB43:    *((unsigned int *)t13) = 1;
    goto LAB46;

LAB48:    t23 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t23 | t24);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t25 | t26);
    goto LAB47;

LAB49:    xsi_set_current_line(279, ng0);

LAB52:    xsi_set_current_line(280, ng0);
    t15 = ((char*)((ng4)));
    t16 = (t0 + 6464);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    goto LAB51;

LAB54:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB55;

LAB56:    xsi_set_current_line(286, ng0);

LAB59:    xsi_set_current_line(287, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6464);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB58;

LAB61:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB62;

LAB63:    xsi_set_current_line(294, ng0);

LAB66:    xsi_set_current_line(295, ng0);
    t5 = ((char*)((ng6)));
    t11 = (t0 + 6464);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB65;

LAB68:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB69;

LAB70:    xsi_set_current_line(302, ng0);

LAB73:    xsi_set_current_line(303, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6464);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB72;

LAB75:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB76;

LAB77:    xsi_set_current_line(310, ng0);

LAB80:    xsi_set_current_line(311, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6464);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB79;

LAB82:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB83;

LAB84:    xsi_set_current_line(318, ng0);

LAB87:    xsi_set_current_line(319, ng0);
    t5 = ((char*)((ng9)));
    t11 = (t0 + 6464);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB86;

LAB89:    xsi_vlogvar_assign_value(t5, t3, 0, *((unsigned int *)t13), 1);
    goto LAB90;

LAB91:    xsi_set_current_line(326, ng0);

LAB94:    xsi_set_current_line(327, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 6464);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB93;

LAB96:    xsi_set_current_line(333, ng0);

LAB99:    xsi_set_current_line(334, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 6464);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(335, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5984);
    t5 = (t0 + 5984);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB100;

LAB101:    goto LAB98;

LAB100:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB101;

LAB103:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB104;

}


extern void work_m_00000000000025126252_3479608206_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Always_136_1,(void *)Always_258_2};
	xsi_register_didat("work_m_00000000000025126252_3479608206", "isim/GasDetectorSensor_TESTBENCH_isim_beh.exe.sim/work/m_00000000000025126252_3479608206.didat");
	xsi_register_executes(pe);
}
