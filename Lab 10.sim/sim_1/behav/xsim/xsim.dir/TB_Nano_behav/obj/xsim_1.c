/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_14474(char*, char *);
extern void execute_14475(char*, char *);
extern void execute_14396(char*, char *);
extern void execute_14397(char*, char *);
extern void execute_14398(char*, char *);
extern void execute_14399(char*, char *);
extern void execute_29(char*, char *);
extern void execute_30(char*, char *);
extern void execute_31(char*, char *);
extern void execute_32(char*, char *);
extern void execute_33(char*, char *);
extern void execute_34(char*, char *);
extern void execute_35(char*, char *);
extern void execute_36(char*, char *);
extern void execute_37(char*, char *);
extern void execute_38(char*, char *);
extern void execute_39(char*, char *);
extern void execute_40(char*, char *);
extern void execute_41(char*, char *);
extern void execute_42(char*, char *);
extern void execute_27(char*, char *);
extern void execute_28(char*, char *);
extern void execute_20(char*, char *);
extern void execute_21(char*, char *);
extern void execute_22(char*, char *);
extern void execute_64(char*, char *);
extern void execute_57(char*, char *);
extern void execute_58(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_62(char*, char *);
extern void execute_63(char*, char *);
extern void execute_48(char*, char *);
extern void execute_49(char*, char *);
extern void execute_50(char*, char *);
extern void execute_51(char*, char *);
extern void execute_368(char*, char *);
extern void execute_369(char*, char *);
extern void execute_370(char*, char *);
extern void execute_400(char*, char *);
extern void execute_436(char*, char *);
extern void execute_412(char*, char *);
extern void execute_413(char*, char *);
extern void execute_414(char*, char *);
extern void execute_415(char*, char *);
extern void execute_416(char*, char *);
extern void execute_417(char*, char *);
extern void execute_403(char*, char *);
extern void execute_404(char*, char *);
extern void execute_405(char*, char *);
extern void execute_406(char*, char *);
extern void execute_419(char*, char *);
extern void execute_421(char*, char *);
extern void execute_14368(char*, char *);
extern void execute_14369(char*, char *);
extern void execute_14370(char*, char *);
extern void execute_14371(char*, char *);
extern void execute_14372(char*, char *);
extern void execute_14373(char*, char *);
extern void execute_14374(char*, char *);
extern void execute_439(char*, char *);
extern void execute_440(char*, char *);
extern void execute_441(char*, char *);
extern void execute_442(char*, char *);
extern void execute_443(char*, char *);
extern void execute_444(char*, char *);
extern void execute_445(char*, char *);
extern void execute_446(char*, char *);
extern void execute_456(char*, char *);
extern void execute_457(char*, char *);
extern void execute_451(char*, char *);
extern void execute_452(char*, char *);
extern void execute_1300(char*, char *);
extern void execute_1130(char*, char *);
extern void execute_1131(char*, char *);
extern void execute_1132(char*, char *);
extern void execute_1133(char*, char *);
extern void execute_1134(char*, char *);
extern void execute_1135(char*, char *);
extern void execute_1136(char*, char *);
extern void execute_1137(char*, char *);
extern void execute_1125(char*, char *);
extern void execute_1126(char*, char *);
extern void execute_1128(char*, char *);
extern void execute_1129(char*, char *);
extern void execute_1229(char*, char *);
extern void execute_1230(char*, char *);
extern void execute_1231(char*, char *);
extern void execute_1232(char*, char *);
extern void execute_1233(char*, char *);
extern void execute_1234(char*, char *);
extern void execute_1235(char*, char *);
extern void execute_1236(char*, char *);
extern void execute_2439(char*, char *);
extern void execute_2095(char*, char *);
extern void execute_2096(char*, char *);
extern void execute_2097(char*, char *);
extern void execute_2098(char*, char *);
extern void execute_2099(char*, char *);
extern void execute_2100(char*, char *);
extern void execute_2101(char*, char *);
extern void execute_2102(char*, char *);
extern void execute_1397(char*, char *);
extern void execute_1398(char*, char *);
extern void execute_1389(char*, char *);
extern void execute_1390(char*, char *);
extern void execute_1391(char*, char *);
extern void execute_1392(char*, char *);
extern void execute_1393(char*, char *);
extern void execute_1394(char*, char *);
extern void execute_1395(char*, char *);
extern void execute_1396(char*, char *);
extern void execute_2072(char*, char *);
extern void execute_2073(char*, char *);
extern void execute_14198(char*, char *);
extern void execute_8674(char*, char *);
extern void execute_8675(char*, char *);
extern void execute_8676(char*, char *);
extern void execute_8677(char*, char *);
extern void execute_8678(char*, char *);
extern void execute_8679(char*, char *);
extern void execute_8680(char*, char *);
extern void execute_8681(char*, char *);
extern void execute_14200(char*, char *);
extern void execute_14201(char*, char *);
extern void execute_14202(char*, char *);
extern void execute_14203(char*, char *);
extern void execute_14204(char*, char *);
extern void execute_14205(char*, char *);
extern void execute_14280(char*, char *);
extern void execute_14281(char*, char *);
extern void execute_14282(char*, char *);
extern void execute_14283(char*, char *);
extern void execute_14284(char*, char *);
extern void execute_14285(char*, char *);
extern void execute_14286(char*, char *);
extern void execute_14287(char*, char *);
extern void execute_14288(char*, char *);
extern void execute_14289(char*, char *);
extern void execute_14241(char*, char *);
extern void execute_14242(char*, char *);
extern void execute_14243(char*, char *);
extern void execute_14244(char*, char *);
extern void execute_14245(char*, char *);
extern void execute_14246(char*, char *);
extern void execute_14247(char*, char *);
extern void execute_14248(char*, char *);
extern void execute_14249(char*, char *);
extern void execute_14250(char*, char *);
extern void execute_14224(char*, char *);
extern void execute_14225(char*, char *);
extern void execute_14226(char*, char *);
extern void execute_14227(char*, char *);
extern void execute_14228(char*, char *);
extern void execute_14229(char*, char *);
extern void execute_14230(char*, char *);
extern void execute_14231(char*, char *);
extern void execute_14392(char*, char *);
extern void execute_14393(char*, char *);
extern void execute_14394(char*, char *);
extern void execute_14395(char*, char *);
extern void execute_14389(char*, char *);
extern void execute_14402(char*, char *);
extern void execute_14405(char*, char *);
extern void execute_14406(char*, char *);
extern void execute_14407(char*, char *);
extern void execute_14458(char*, char *);
extern void execute_14469(char*, char *);
extern void execute_14470(char*, char *);
extern void execute_14471(char*, char *);
extern void execute_14461(char*, char *);
extern void execute_14462(char*, char *);
extern void execute_14473(char*, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_21(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_26(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[185] = {(funcp)execute_14474, (funcp)execute_14475, (funcp)execute_14396, (funcp)execute_14397, (funcp)execute_14398, (funcp)execute_14399, (funcp)execute_29, (funcp)execute_30, (funcp)execute_31, (funcp)execute_32, (funcp)execute_33, (funcp)execute_34, (funcp)execute_35, (funcp)execute_36, (funcp)execute_37, (funcp)execute_38, (funcp)execute_39, (funcp)execute_40, (funcp)execute_41, (funcp)execute_42, (funcp)execute_27, (funcp)execute_28, (funcp)execute_20, (funcp)execute_21, (funcp)execute_22, (funcp)execute_64, (funcp)execute_57, (funcp)execute_58, (funcp)execute_59, (funcp)execute_60, (funcp)execute_61, (funcp)execute_62, (funcp)execute_63, (funcp)execute_48, (funcp)execute_49, (funcp)execute_50, (funcp)execute_51, (funcp)execute_368, (funcp)execute_369, (funcp)execute_370, (funcp)execute_400, (funcp)execute_436, (funcp)execute_412, (funcp)execute_413, (funcp)execute_414, (funcp)execute_415, (funcp)execute_416, (funcp)execute_417, (funcp)execute_403, (funcp)execute_404, (funcp)execute_405, (funcp)execute_406, (funcp)execute_419, (funcp)execute_421, (funcp)execute_14368, (funcp)execute_14369, (funcp)execute_14370, (funcp)execute_14371, (funcp)execute_14372, (funcp)execute_14373, (funcp)execute_14374, (funcp)execute_439, (funcp)execute_440, (funcp)execute_441, (funcp)execute_442, (funcp)execute_443, (funcp)execute_444, (funcp)execute_445, (funcp)execute_446, (funcp)execute_456, (funcp)execute_457, (funcp)execute_451, (funcp)execute_452, (funcp)execute_1300, (funcp)execute_1130, (funcp)execute_1131, (funcp)execute_1132, (funcp)execute_1133, (funcp)execute_1134, (funcp)execute_1135, (funcp)execute_1136, (funcp)execute_1137, (funcp)execute_1125, (funcp)execute_1126, (funcp)execute_1128, (funcp)execute_1129, (funcp)execute_1229, (funcp)execute_1230, (funcp)execute_1231, (funcp)execute_1232, (funcp)execute_1233, (funcp)execute_1234, (funcp)execute_1235, (funcp)execute_1236, (funcp)execute_2439, (funcp)execute_2095, (funcp)execute_2096, (funcp)execute_2097, (funcp)execute_2098, (funcp)execute_2099, (funcp)execute_2100, (funcp)execute_2101, (funcp)execute_2102, (funcp)execute_1397, (funcp)execute_1398, (funcp)execute_1389, (funcp)execute_1390, (funcp)execute_1391, (funcp)execute_1392, (funcp)execute_1393, (funcp)execute_1394, (funcp)execute_1395, (funcp)execute_1396, (funcp)execute_2072, (funcp)execute_2073, (funcp)execute_14198, (funcp)execute_8674, (funcp)execute_8675, (funcp)execute_8676, (funcp)execute_8677, (funcp)execute_8678, (funcp)execute_8679, (funcp)execute_8680, (funcp)execute_8681, (funcp)execute_14200, (funcp)execute_14201, (funcp)execute_14202, (funcp)execute_14203, (funcp)execute_14204, (funcp)execute_14205, (funcp)execute_14280, (funcp)execute_14281, (funcp)execute_14282, (funcp)execute_14283, (funcp)execute_14284, (funcp)execute_14285, (funcp)execute_14286, (funcp)execute_14287, (funcp)execute_14288, (funcp)execute_14289, (funcp)execute_14241, (funcp)execute_14242, (funcp)execute_14243, (funcp)execute_14244, (funcp)execute_14245, (funcp)execute_14246, (funcp)execute_14247, (funcp)execute_14248, (funcp)execute_14249, (funcp)execute_14250, (funcp)execute_14224, (funcp)execute_14225, (funcp)execute_14226, (funcp)execute_14227, (funcp)execute_14228, (funcp)execute_14229, (funcp)execute_14230, (funcp)execute_14231, (funcp)execute_14392, (funcp)execute_14393, (funcp)execute_14394, (funcp)execute_14395, (funcp)execute_14389, (funcp)execute_14402, (funcp)execute_14405, (funcp)execute_14406, (funcp)execute_14407, (funcp)execute_14458, (funcp)execute_14469, (funcp)execute_14470, (funcp)execute_14471, (funcp)execute_14461, (funcp)execute_14462, (funcp)execute_14473, (funcp)transaction_0, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_10, (funcp)transaction_19, (funcp)transaction_20, (funcp)transaction_21, (funcp)transaction_22, (funcp)transaction_23, (funcp)transaction_24, (funcp)transaction_25, (funcp)transaction_26};
const int NumRelocateId= 185;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/TB_Nano_behav/xsim.reloc",  (void **)funcTab, 185);
	iki_vhdl_file_variable_register(dp + 1886064);
	iki_vhdl_file_variable_register(dp + 1886120);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/TB_Nano_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/TB_Nano_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/TB_Nano_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/TB_Nano_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/TB_Nano_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
