/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "Fraction.h"

class FractionTest : public ::testing::Test
{
	protected:
		FractionTest(){}
		virtual ~FractionTest(){}
		virtual void SetUp(){} //sets up before each test case (after constructor)
		virtual void TearDown(){} //clean up after each test case (before destructor) 
};


/* EXAMPLE UNIT TEST
TEST( FractionTest, exampleTest)
{
	int result = 1 + 2;
	ASSERT_EQ(result, 3);
}
*/