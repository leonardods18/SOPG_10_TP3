/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_LedsOffAfterCreate();
extern void test_AllOff();
extern void test_AllOn();
extern void test_MultipleOnOff();
extern void test_IsOn();
extern void test_On1();
extern void test_On16();
extern void test_Off1();
extern void test_Off16();
extern void test_IsOn1();
extern void test_IsOn16();
extern void test_On0();
extern void test_On17();
extern void test_Off0();
extern void test_Off17();
extern void test_IsOn0();
extern void test_IsOn17();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}
/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {

            setUp();
            func();

    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_led.c");
  run_test(test_LedsOffAfterCreate, "test_LedsOffAfterCreate", 18);
  run_test(test_AllOff, "test_AllOff", 25);
  run_test(test_AllOn, "test_AllOn", 32);
  run_test(test_MultipleOnOff, "test_MultipleOnOff", 39);
  run_test(test_IsOn, "test_IsOn", 46);
  run_test(test_On1, "test_On1", 54);
  run_test(test_On16, "test_On16", 60);
  run_test(test_Off1, "test_Off1", 66);
  run_test(test_Off16, "test_Off16", 73);
  run_test(test_IsOn1, "test_IsOn1", 80);
  run_test(test_IsOn16, "test_IsOn16", 87);
  run_test(test_On0, "test_On0", 95);
  run_test(test_On17, "test_On17", 101);
  run_test(test_Off0, "test_Off0", 107);
  run_test(test_Off17, "test_Off17", 114);
  run_test(test_IsOn0, "test_IsOn0", 121);
  run_test(test_IsOn17, "test_IsOn17", 128);

  return UnityEnd();
}
