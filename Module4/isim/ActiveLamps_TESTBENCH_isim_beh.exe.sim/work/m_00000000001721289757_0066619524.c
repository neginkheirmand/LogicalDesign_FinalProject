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
static const char *ng0 = "C:/Users/venus/Desktop/uni2/3rd_SEMESTER/madar mantegh/FinalProject/Module4/ActiveLamps.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {8U, 0U};



static void Always_31_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3688);
    *((int *)t2) = 1;
    t3 = (t0 + 3400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1728U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB18:    xsi_set_current_line(34, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 4, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(36, ng0);

LAB19:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(39, ng0);

LAB20:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t4, 4, t3, 32);
    t7 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 4, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(44, ng0);

LAB21:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 4, 0LL);
    goto LAB17;

LAB15:    xsi_set_current_line(47, ng0);

LAB22:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB17;

}


extern void work_m_00000000001721289757_0066619524_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001721289757_0066619524", "isim/ActiveLamps_TESTBENCH_isim_beh.exe.sim/work/m_00000000001721289757_0066619524.didat");
	xsi_register_executes(pe);
}
