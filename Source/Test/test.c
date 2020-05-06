
/**
 * @brief a test source file
 */
 
#include "test.h"
 
#include <stdio.h>
 
#ifndef TEST_CONFIG
#define TEST_CONFIG 0
#endif	/* TEST_CONFIG */
  
int testSum(int x, int y)
{
    return x + y;
}
 
#ifndef UNIT_TEST
int main(void)
{
    printf("\r\nHello World!");
	printf("\r\nTest Config Value : %d\r\n", TEST_CONFIG);
}
#endif