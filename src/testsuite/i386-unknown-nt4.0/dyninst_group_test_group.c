#ifdef __cplusplus
extern "C" {
#endif
#include "../src/mutatee_call_info.h"

extern int test1_1_mutatee(void);
extern int test1_10_mutatee(void);
extern int test1_11_mutatee(void);
extern int test1_13_mutatee(void);
extern int test1_16_mutatee(void);
extern int test1_17_mutatee(void);
extern int test1_18_mutatee(void);
extern int test1_2_mutatee(void);
extern int test1_20_mutatee(void);
extern int test1_21_mutatee(void);
extern int test1_22_mutatee(void);
extern int test1_23_mutatee(void);
extern int test1_24_mutatee(void);
extern int test1_25_mutatee(void);
extern int test1_26_mutatee(void);
extern int test1_27_mutatee(void);
extern int test1_28_mutatee(void);
extern int test1_3_mutatee(void);
extern int test1_30_mutatee(void);
extern int test1_31_mutatee(void);
extern int test1_32_mutatee(void);
extern int test1_33_mutatee(void);
extern int test1_34_mutatee(void);
extern int test1_36_mutatee(void);
extern int test1_37_mutatee(void);
extern int test1_38_mutatee(void);
extern int test1_4_mutatee(void);
extern int test1_5_mutatee(void);
extern int test1_6_mutatee(void);
extern int test1_7_mutatee(void);
extern int test1_8_mutatee(void);
extern int test1_9_mutatee(void);
extern int test2_11_mutatee(void);
extern int test2_12_mutatee(void);
extern int test2_13_mutatee(void);
extern int test2_5_mutatee(void);
extern int test2_7_mutatee(void);

mutatee_call_info_t mutatee_funcs[] = {
  {"test1_1", test1_1_mutatee, GROUPED, "test1_1"},
  {"test1_10", test1_10_mutatee, GROUPED, "test1_10"},
  {"test1_11", test1_11_mutatee, GROUPED, "test1_11"},
  {"test1_13", test1_13_mutatee, GROUPED, "test1_13"},
  {"test1_16", test1_16_mutatee, GROUPED, "test1_16"},
  {"test1_17", test1_17_mutatee, GROUPED, "test1_17"},
  {"test1_18", test1_18_mutatee, GROUPED, "test1_18"},
  {"test1_2", test1_2_mutatee, GROUPED, "test1_2"},
  {"test1_20", test1_20_mutatee, GROUPED, "test1_20"},
  {"test1_21", test1_21_mutatee, GROUPED, "test1_21"},
  {"test1_22", test1_22_mutatee, GROUPED, "test1_22"},
  {"test1_23", test1_23_mutatee, GROUPED, "test1_23"},
  {"test1_24", test1_24_mutatee, GROUPED, "test1_24"},
  {"test1_25", test1_25_mutatee, GROUPED, "test1_25"},
  {"test1_26", test1_26_mutatee, GROUPED, "test1_26"},
  {"test1_27", test1_27_mutatee, GROUPED, "test1_27"},
  {"test1_28", test1_28_mutatee, GROUPED, "test1_28"},
  {"test1_3", test1_3_mutatee, GROUPED, "test1_3"},
  {"test1_30", test1_30_mutatee, GROUPED, "test1_30"},
  {"test1_31", test1_31_mutatee, GROUPED, "test1_31"},
  {"test1_32", test1_32_mutatee, GROUPED, "test1_32"},
  {"test1_33", test1_33_mutatee, GROUPED, "test1_33"},
  {"test1_34", test1_34_mutatee, GROUPED, "test1_34"},
  {"test1_36", test1_36_mutatee, GROUPED, "test1_36"},
  {"test1_37", test1_37_mutatee, GROUPED, "test1_37"},
  {"test1_38", test1_38_mutatee, GROUPED, "test1_38"},
  {"test1_4", test1_4_mutatee, GROUPED, "test1_4"},
  {"test1_5", test1_5_mutatee, GROUPED, "test1_5"},
  {"test1_6", test1_6_mutatee, GROUPED, "test1_6"},
  {"test1_7", test1_7_mutatee, GROUPED, "test1_7"},
  {"test1_8", test1_8_mutatee, GROUPED, "test1_8"},
  {"test1_9", test1_9_mutatee, GROUPED, "test1_9"},
  {"test2_11", test2_11_mutatee, GROUPED, "test2_11"},
  {"test2_12", test2_12_mutatee, GROUPED, "test2_12"},
  {"test2_13", test2_13_mutatee, GROUPED, "test2_13"},
  {"test2_5", test2_5_mutatee, GROUPED, "test2_5"},
  {"test2_7", test2_7_mutatee, GROUPED, "test2_7"}
};

int max_tests = 37;
int runTest[37];
int passedTest[37];
#ifdef __cplusplus
}
#endif
