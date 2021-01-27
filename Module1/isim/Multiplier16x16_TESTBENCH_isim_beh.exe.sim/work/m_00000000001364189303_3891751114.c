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
static const char *ng0 = "C:/Users/venus/Desktop/uni2/3rd_SEMESTER/madar mantegh/FinalProject/Module1/Multiplier16x16_TESTBENCH.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {4, 0};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {5U, 0U};



static void Initial_22_0(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);

LAB4:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t3 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t0 + 4492);
    *((int *)t9) = t8;

LAB6:    t10 = (t0 + 4492);
    if (*((int *)t10) > 0)
        goto LAB7;

LAB8:    goto LAB1;

LAB7:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t11 = (t0 + 2336);
    xsi_process_wait(t11, 20000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(30, ng0);
    t12 = (t0 + 1448);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 16, t14, 16, t15, 16);
    t17 = (t0 + 1448);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 16);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t4 = (t0 + 4496);
    *((int *)t4) = t8;

LAB11:    t9 = (t0 + 4496);
    if (*((int *)t9) > 0)
        goto LAB12;

LAB13:    t2 = (t0 + 4492);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB6;

LAB12:    xsi_set_current_line(33, ng0);
    t10 = (t0 + 2336);
    xsi_process_wait(t10, 20000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(33, ng0);
    t11 = (t0 + 1608);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 16, t13, 16, t14, 16);
    t15 = (t0 + 1608);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 16);
    t2 = (t0 + 4496);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB11;

}


extern void work_m_00000000001364189303_3891751114_init()
{
	static char *pe[] = {(void *)Initial_22_0};
	xsi_register_didat("work_m_00000000001364189303_3891751114", "isim/Multiplier16x16_TESTBENCH_isim_beh.exe.sim/work/m_00000000001364189303_3891751114.didat");
	xsi_register_executes(pe);
}
