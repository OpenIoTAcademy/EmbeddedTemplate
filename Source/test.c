
/**
 * @brief a test source file
 */
 
 #include "test.h"
 
 #include <stdio.h>
 
 #ifndef TEST_CONFIG
 #error "TEST_CONFIG is not defined"
 #endif	/* TEST_DEFINE */
 
 void testFunction(void)
 {
	 printf("\r\nHello World!");
	 printf("\r\nTest Config Value : %d\r\n", TEST_CONFIG);
 }
 
 error here
 
 int main(void)
 {
	 testFunction();
 }