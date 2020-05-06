/*******************************************************************************
 *
 * @file unittest_Test.c
 *
 * @brief Unit test file for Test Modul
 *
 ******************************************************************************/

/********************************* INCLUDES ***********************************/

/* Include CPU source file for WHITE-BOX unit testing */
#include "../test.c"

/* Include Unity Framework */
#include "unity.h"

/***************************** MACRO DEFINITIONS ******************************/

/***************************** TYPE DEFINITIONS *******************************/

/**************************** FUNCTION PROTOTYPES *****************************/

/******************************** VARIABLES ***********************************/

/**************************** INTERNAL FUNCTIONS ******************************/
/**
 * @brief Constructor Method for each test case
 *
 */
void setUp(void)
{
	/* For now, nothing to do */
}

/**
 * @brief Destructor Method for each test case
 *
 */
void tearDown(void)
{
	/* For now, nothing to do */
}

/***************************** TEST FUNCTIONS *******************************/

void test_TestSum(void)
{
	int x = 1;
	int y = 2;
	int expectedSum = x + y;
	
	int actualSum = testSum(x, y);
	
	TEST_ASSERT(expectedSum == actualSum);
}
