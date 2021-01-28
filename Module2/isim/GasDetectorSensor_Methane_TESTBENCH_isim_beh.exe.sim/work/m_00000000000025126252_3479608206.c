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



static void Always_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 8448);
    *((int *)t2) = 1;
    t3 = (t0 + 7416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5984);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB2;

}

static void Always_38_1(char *t0)
{
    char t11[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
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
    unsigned int t34;
    unsigned int t35;

LAB0:    t1 = (t0 + 7632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 8464);
    *((int *)t2) = 1;
    t3 = (t0 + 7664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 6144);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);

LAB28:    xsi_set_current_line(42, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5984);
    t12 = (t0 + 5984);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB27;

LAB9:    xsi_set_current_line(49, ng0);

LAB35:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB41;

LAB39:    if (*((unsigned int *)t2) == 0)
        goto LAB38;

LAB40:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB41:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    *((unsigned int *)t11) = t24;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB42:    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 1U);
    t30 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t30 & 1U);
    t9 = (t11 + 4);
    t31 = *((unsigned int *)t9);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB27;

LAB11:    xsi_set_current_line(56, ng0);

LAB48:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB53:    goto LAB27;

LAB13:    xsi_set_current_line(64, ng0);

LAB55:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB60:    goto LAB27;

LAB15:    xsi_set_current_line(72, ng0);

LAB62:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB67:    goto LAB27;

LAB17:    xsi_set_current_line(80, ng0);

LAB69:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB74:    goto LAB27;

LAB19:    xsi_set_current_line(88, ng0);

LAB76:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB77;

LAB78:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB81:    goto LAB27;

LAB21:    xsi_set_current_line(96, ng0);

LAB83:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB84;

LAB85:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB88:    goto LAB27;

LAB23:    xsi_set_current_line(104, ng0);

LAB90:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB91;

LAB92:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB95:    goto LAB27;

LAB25:    xsi_set_current_line(112, ng0);

LAB97:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 5584U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t17 = *((unsigned int *)t3);
    t19 = (~(t17));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(119, ng0);

LAB104:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5984);
    t4 = (t0 + 5984);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t9, 32, 1);
    t10 = (t11 + 4);
    t17 = *((unsigned int *)t10);
    t8 = (!(t17));
    if (t8 == 1)
        goto LAB105;

LAB106:
LAB100:    goto LAB27;

LAB29:    xsi_vlogvar_assign_value(t10, t9, 0, *((unsigned int *)t11), 1);
    goto LAB30;

LAB31:    xsi_set_current_line(44, ng0);

LAB34:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB33;

LAB36:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB37;

LAB38:    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB43:    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t25 | t26);
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t27 | t28);
    goto LAB42;

LAB44:    xsi_set_current_line(52, ng0);

LAB47:    xsi_set_current_line(53, ng0);
    t10 = ((char*)((ng4)));
    t12 = (t0 + 6144);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB46;

LAB49:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB50;

LAB51:    xsi_set_current_line(59, ng0);

LAB54:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB53;

LAB56:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB57;

LAB58:    xsi_set_current_line(67, ng0);

LAB61:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB60;

LAB63:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB64;

LAB65:    xsi_set_current_line(75, ng0);

LAB68:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB67;

LAB70:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB71;

LAB72:    xsi_set_current_line(83, ng0);

LAB75:    xsi_set_current_line(84, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB74;

LAB77:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB78;

LAB79:    xsi_set_current_line(91, ng0);

LAB82:    xsi_set_current_line(92, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB81;

LAB84:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB85;

LAB86:    xsi_set_current_line(99, ng0);

LAB89:    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB88;

LAB91:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB92;

LAB93:    xsi_set_current_line(107, ng0);

LAB96:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB95;

LAB98:    xsi_set_current_line(114, ng0);

LAB101:    xsi_set_current_line(115, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 6144);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5984);
    t4 = (t0 + 5984);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t9, 32, 1);
    t10 = (t11 + 4);
    t17 = *((unsigned int *)t10);
    t8 = (!(t17));
    if (t8 == 1)
        goto LAB102;

LAB103:    goto LAB100;

LAB102:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t11), 1);
    goto LAB103;

LAB105:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t11), 1);
    goto LAB106;

}

static void Always_137_2(char *t0)
{
    char t11[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
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
    unsigned int t34;
    unsigned int t35;

LAB0:    t1 = (t0 + 7880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 7912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(138, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 6304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(140, ng0);

LAB32:    xsi_set_current_line(141, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5984);
    t12 = (t0 + 5984);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB31;

LAB9:    xsi_set_current_line(148, ng0);

LAB39:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t2) == 0)
        goto LAB42;

LAB44:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB45:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    *((unsigned int *)t11) = t24;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB47;

LAB46:    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 1U);
    t30 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t30 & 1U);
    t9 = (t11 + 4);
    t31 = *((unsigned int *)t9);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB31;

LAB11:    xsi_set_current_line(155, ng0);

LAB52:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB57:    goto LAB31;

LAB13:    xsi_set_current_line(163, ng0);

LAB59:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB64:    goto LAB31;

LAB15:    xsi_set_current_line(171, ng0);

LAB66:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB71:    goto LAB31;

LAB17:    xsi_set_current_line(179, ng0);

LAB73:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB78:    goto LAB31;

LAB19:    xsi_set_current_line(187, ng0);

LAB80:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB85:    goto LAB31;

LAB21:    xsi_set_current_line(195, ng0);

LAB87:    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB88;

LAB89:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB92:    goto LAB31;

LAB23:    xsi_set_current_line(203, ng0);

LAB94:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB95;

LAB96:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB99:    goto LAB31;

LAB25:    xsi_set_current_line(211, ng0);

LAB101:    xsi_set_current_line(212, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB102;

LAB103:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB106:    goto LAB31;

LAB27:    xsi_set_current_line(219, ng0);

LAB108:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB109;

LAB110:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB113:    goto LAB31;

LAB29:    xsi_set_current_line(227, ng0);

LAB115:    xsi_set_current_line(228, ng0);
    t3 = (t0 + 5584U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t17 = *((unsigned int *)t3);
    t19 = (~(t17));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(234, ng0);

LAB122:    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5984);
    t4 = (t0 + 5984);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t9, 32, 1);
    t10 = (t11 + 4);
    t17 = *((unsigned int *)t10);
    t8 = (!(t17));
    if (t8 == 1)
        goto LAB123;

LAB124:
LAB118:    goto LAB31;

LAB33:    xsi_vlogvar_assign_value(t10, t9, 0, *((unsigned int *)t11), 1);
    goto LAB34;

LAB35:    xsi_set_current_line(143, ng0);

LAB38:    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB37;

LAB40:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB41;

LAB42:    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB47:    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t25 | t26);
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t27 | t28);
    goto LAB46;

LAB48:    xsi_set_current_line(151, ng0);

LAB51:    xsi_set_current_line(152, ng0);
    t10 = ((char*)((ng4)));
    t12 = (t0 + 6304);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB50;

LAB53:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB54;

LAB55:    xsi_set_current_line(158, ng0);

LAB58:    xsi_set_current_line(159, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB57;

LAB60:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB61;

LAB62:    xsi_set_current_line(166, ng0);

LAB65:    xsi_set_current_line(167, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB64;

LAB67:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB68;

LAB69:    xsi_set_current_line(174, ng0);

LAB72:    xsi_set_current_line(175, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB71;

LAB74:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB75;

LAB76:    xsi_set_current_line(182, ng0);

LAB79:    xsi_set_current_line(183, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB78;

LAB81:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB82;

LAB83:    xsi_set_current_line(190, ng0);

LAB86:    xsi_set_current_line(191, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB85;

LAB88:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB89;

LAB90:    xsi_set_current_line(198, ng0);

LAB93:    xsi_set_current_line(199, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB92;

LAB95:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB96;

LAB97:    xsi_set_current_line(206, ng0);

LAB100:    xsi_set_current_line(207, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB99;

LAB102:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB103;

LAB104:    xsi_set_current_line(214, ng0);

LAB107:    xsi_set_current_line(215, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB106;

LAB109:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB110;

LAB111:    xsi_set_current_line(222, ng0);

LAB114:    xsi_set_current_line(223, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t0 + 6304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB113;

LAB116:    xsi_set_current_line(229, ng0);

LAB119:    xsi_set_current_line(230, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 6304);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5984);
    t4 = (t0 + 5984);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t9, 32, 1);
    t10 = (t11 + 4);
    t17 = *((unsigned int *)t10);
    t8 = (!(t17));
    if (t8 == 1)
        goto LAB120;

LAB121:    goto LAB118;

LAB120:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t11), 1);
    goto LAB121;

LAB123:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t11), 1);
    goto LAB124;

}

static void Always_251_3(char *t0)
{
    char t11[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
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
    unsigned int t34;
    unsigned int t35;

LAB0:    t1 = (t0 + 8128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 8496);
    *((int *)t2) = 1;
    t3 = (t0 + 8160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(252, ng0);

LAB5:    xsi_set_current_line(253, ng0);
    t4 = (t0 + 6464);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(254, ng0);

LAB26:    xsi_set_current_line(255, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5984);
    t12 = (t0 + 5984);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB25;

LAB9:    xsi_set_current_line(262, ng0);

LAB33:    xsi_set_current_line(263, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t2) == 0)
        goto LAB36;

LAB38:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB39:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    *((unsigned int *)t11) = t24;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB41;

LAB40:    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 1U);
    t30 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t30 & 1U);
    t9 = (t11 + 4);
    t31 = *((unsigned int *)t9);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB25;

LAB11:    xsi_set_current_line(269, ng0);

LAB46:    xsi_set_current_line(270, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(271, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB51:    goto LAB25;

LAB13:    xsi_set_current_line(277, ng0);

LAB53:    xsi_set_current_line(278, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB58:    goto LAB25;

LAB15:    xsi_set_current_line(285, ng0);

LAB60:    xsi_set_current_line(286, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(287, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB65:    goto LAB25;

LAB17:    xsi_set_current_line(293, ng0);

LAB67:    xsi_set_current_line(294, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(295, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB72:    goto LAB25;

LAB19:    xsi_set_current_line(301, ng0);

LAB74:    xsi_set_current_line(302, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB75;

LAB76:    xsi_set_current_line(303, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB79:    goto LAB25;

LAB21:    xsi_set_current_line(309, ng0);

LAB81:    xsi_set_current_line(310, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5984);
    t5 = (t0 + 5984);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB82;

LAB83:    xsi_set_current_line(311, ng0);
    t2 = (t0 + 5584U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t17 = *((unsigned int *)t2);
    t19 = (~(t17));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB86:    goto LAB25;

LAB23:    xsi_set_current_line(317, ng0);

LAB88:    xsi_set_current_line(318, ng0);
    t3 = (t0 + 5584U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t17 = *((unsigned int *)t3);
    t19 = (~(t17));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(324, ng0);

LAB95:    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5984);
    t4 = (t0 + 5984);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t9, 32, 1);
    t10 = (t11 + 4);
    t17 = *((unsigned int *)t10);
    t8 = (!(t17));
    if (t8 == 1)
        goto LAB96;

LAB97:
LAB91:    goto LAB25;

LAB27:    xsi_vlogvar_assign_value(t10, t9, 0, *((unsigned int *)t11), 1);
    goto LAB28;

LAB29:    xsi_set_current_line(257, ng0);

LAB32:    xsi_set_current_line(258, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB31;

LAB34:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB35;

LAB36:    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB41:    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t25 | t26);
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t27 | t28);
    goto LAB40;

LAB42:    xsi_set_current_line(265, ng0);

LAB45:    xsi_set_current_line(266, ng0);
    t10 = ((char*)((ng4)));
    t12 = (t0 + 6464);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 4);
    goto LAB44;

LAB47:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB48;

LAB49:    xsi_set_current_line(272, ng0);

LAB52:    xsi_set_current_line(273, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB51;

LAB54:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB55;

LAB56:    xsi_set_current_line(280, ng0);

LAB59:    xsi_set_current_line(281, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB58;

LAB61:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB62;

LAB63:    xsi_set_current_line(288, ng0);

LAB66:    xsi_set_current_line(289, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB65;

LAB68:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB69;

LAB70:    xsi_set_current_line(296, ng0);

LAB73:    xsi_set_current_line(297, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB72;

LAB75:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB76;

LAB77:    xsi_set_current_line(304, ng0);

LAB80:    xsi_set_current_line(305, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB79;

LAB82:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t11), 1);
    goto LAB83;

LAB84:    xsi_set_current_line(312, ng0);

LAB87:    xsi_set_current_line(313, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB86;

LAB89:    xsi_set_current_line(319, ng0);

LAB92:    xsi_set_current_line(320, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 6464);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5984);
    t4 = (t0 + 5984);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t9, 32, 1);
    t10 = (t11 + 4);
    t17 = *((unsigned int *)t10);
    t8 = (!(t17));
    if (t8 == 1)
        goto LAB93;

LAB94:    goto LAB91;

LAB93:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t11), 1);
    goto LAB94;

LAB96:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t11), 1);
    goto LAB97;

}


extern void work_m_00000000000025126252_3479608206_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Always_38_1,(void *)Always_137_2,(void *)Always_251_3};
	xsi_register_didat("work_m_00000000000025126252_3479608206", "isim/GasDetectorSensor_Methane_TESTBENCH_isim_beh.exe.sim/work/m_00000000000025126252_3479608206.didat");
	xsi_register_executes(pe);
}
