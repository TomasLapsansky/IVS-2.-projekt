#include "gtest/gtest.h"
#include "../math_library.h"

class Math_test : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test, Plus_decimal_numbers)
{
	EXPECT_EQ(plus(5, 5, &error), 10);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(plus(-5, 444, &error), 439);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(plus(0, 0, &error), 0);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(plus(0, 1, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(plus(-4, -15, &error), -19);
	EXPECT_FALSE(error);
}

TEST_F(Math_test, Plus_limits)
{	
	EXPECT_EQ(plus(DBL_MAX, 5, &error), 0);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(plus(DBL_MAX, 2.5, &error), 0);
	EXPECT_TRUE(error);
}

TEST_F(Math_test, Plus_float_numbers)
{
	EXPECT_EQ(plus(15.2501, 14.2501, &error), 29.5002);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(plus(15.2501, -14.2501, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(plus(-25.12, 55.12, &error), 30);
	EXPECT_FALSE(error);
}
