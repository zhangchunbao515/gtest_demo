#ifndef _GTEST_C_H_
#define _GTEST_C_H_

#include <gtest/gtest.h>

#define C_TEST(TestCase, Test) \
	extern "C" \
{ \
	void TestCase##_##Test(void); \
} \
TEST(TestCase, Test) \
{ \
	TestCase##_##Test(); \
}

#endif //_GTEST_C_H_
