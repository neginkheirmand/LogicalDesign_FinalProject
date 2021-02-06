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
static const char *ng0 = "C:/Users/venus/Desktop/uni2/3rd_SEMESTER/madar mantegh/FinalProject/Module7/ControlUnit.v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Always_55_0(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    char *t20;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(62, ng0);

LAB10:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t2) == 0)
        goto LAB11;

LAB13:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB14:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(67, ng0);

LAB19:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB20:    t5 = ((char*)((ng3)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t19 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng4)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t19 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t19 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t19 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng6)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t19 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng8)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t19 == 1)
        goto LAB31;

LAB32:
LAB33:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 35, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(63, ng0);

LAB18:    xsi_set_current_line(64, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB17;

LAB21:    xsi_set_current_line(69, ng0);

LAB34:    xsi_set_current_line(70, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB33;

LAB23:    xsi_set_current_line(73, ng0);

LAB35:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1528U);
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
LAB38:    goto LAB33;

LAB25:    xsi_set_current_line(84, ng0);

LAB45:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB33;

LAB27:    xsi_set_current_line(90, ng0);

LAB50:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 35, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB33;

LAB29:    xsi_set_current_line(95, ng0);

LAB51:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB33;

LAB31:    xsi_set_current_line(101, ng0);

LAB52:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB33;

LAB36:    xsi_set_current_line(75, ng0);

LAB39:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 2168U);
    t11 = *((char **)t5);
    t5 = (t11 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(79, ng0);

LAB44:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB42:    goto LAB38;

LAB40:    xsi_set_current_line(76, ng0);

LAB43:    xsi_set_current_line(77, ng0);
    t12 = ((char*)((ng5)));
    t20 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t20, t12, 0, 0, 3, 0LL);
    goto LAB42;

LAB46:    xsi_set_current_line(86, ng0);

LAB49:    xsi_set_current_line(87, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 3, 0LL);
    goto LAB48;

}


extern void work_m_00000000002840793862_1938225339_init()
{
	static char *pe[] = {(void *)Always_55_0};
	xsi_register_didat("work_m_00000000002840793862_1938225339", "isim/ControlUnit_TESTBENCH_isim_beh.exe.sim/work/m_00000000002840793862_1938225339.didat");
	xsi_register_executes(pe);
}
