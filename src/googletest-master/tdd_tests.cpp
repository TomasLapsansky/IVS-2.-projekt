#include "gtest/gtest.h"
#include "../math_library.h"

class Math_test_plus : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test_plus, Decimal_numbers)
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

TEST_F(Math_test_plus, Limits)
{	
	EXPECT_EQ(plus(DBL_MAX, 5, &error), DBL_MAX);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(plus(DBL_MAX, 2.5, &error), DBL_MAX);
	EXPECT_TRUE(error);
}

TEST_F(Math_test_plus, Float_numbers)
{
	EXPECT_EQ(plus(15.2501, 14.2501, &error), 29.5002);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(plus(15.2501, -14.2501, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(plus(-30.1, 0.1, &error), -30);
	EXPECT_FALSE(error);
}

class Math_test_minus : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test_minus, Decimal_numbers)
{
	EXPECT_EQ(minus(10, 5, &error), 5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(minus(15, 16, &error), -1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(minus(14, -5, &error), 19);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(minus(-13, -5, &error), -8);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(minus(0, 5, &error), -5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(minus(10, 0, &error), 10);
	EXPECT_FALSE(error);
}

TEST_F(Math_test_minus, Limits)
{	
	EXPECT_EQ(minus(-DBL_MAX, 5, &error), -DBL_MAX);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(minus(-DBL_MAX, 2.5, &error), -DBL_MAX);
	EXPECT_TRUE(error);
}

TEST_F(Math_test_minus, Float_numbers)
{
	EXPECT_EQ(minus(15.2501, 14.2501, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(minus(5.002, 0.002, &error), 5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(minus(25.12, -55.12, &error), 80.24);
	EXPECT_FALSE(error);
}

class Math_test_multiple : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test_multiple, Decimal_numbers)
{
	EXPECT_EQ(multi(10, 2, &error), 20);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(multi(-5, 3, &error), -15);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(multi(5, -30, &error), -150);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(multi(-4, -5, &error), 20);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(multi(0, 5, &error), 0);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(multi(5, 0, &error), 0);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(multi(0, 0, &error), 0);
	EXPECT_FALSE(error);
}

TEST_F(Math_test_multiple, Float_numbers)
{
	EXPECT_EQ(multi(2.2, 3.3, &error), 7.26);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(multi(-2.2, 3.3, &error), -7.26);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(multi(2.2, 0, &error), 0);
	EXPECT_FALSE(error);
}

class Math_test_division : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test_division, Decimal_numbers)
{
	EXPECT_EQ(divis(10, 2, &error), 5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(divis(10, -2, &error), -5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(divis(5, 1, &error), 5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(divis(5, -1, &error), -5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(divis(-10, 5, &error), -2);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(divis(-10, -5, &error), 2);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(divis(0, 5, &error), 0);
	EXPECT_FALSE(error);
}

TEST_F(Math_test_division, Zero_division)
{
	EXPECT_EQ(divis(10, 0, &error), 0);
	EXPECT_TRUE(error);

	error = false;
	EXPECT_EQ(divis(-10, 0, &error), 0);
	EXPECT_TRUE(error);

	error = false;
	EXPECT_EQ(divis(10.5, 0, &error), 0);
	EXPECT_TRUE(error);
}

TEST_F(Math_test_division, Float_numbers)
{
	EXPECT_EQ(divis(12.5, 5, &error), 2.5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(divis(10, 2.5, &error), 4);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(divis(-10, 2.5, &error), -4);
	EXPECT_FALSE(error);
}

class Math_test_factorial : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test_factorial, Basic)
{
	EXPECT_EQ(fact(0, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(fact(1, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(fact(2, &error), 2);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(fact(5, &error), 120);
	EXPECT_FALSE(error);
}

TEST_F(Math_test_factorial, Bad_numbers)
{
	EXPECT_EQ(fact(-1, &error), 0);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(fact(2.5, &error), 0);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(fact(-10.1, &error), 0);
	EXPECT_TRUE(error);
}

class Math_test_power : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test_power, Decimal_numbers)
{
	EXPECT_EQ(power(5, 0, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(power(10, 1, &error), 10);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(power(2, 6, &error), 64);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(power(-2, 2, &error), 4);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(power(-2, 3, &error), -8);
	EXPECT_FALSE(error);
}

TEST_F(Math_test_power, Float_numbers)
{
	EXPECT_EQ(power(2.2, 0, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(power(10.5, 1, &error), 10.5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(power(3.5, 3, &error), 42.875);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(power(-3.5, 3, &error), -42.875);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(power(-3.5, 4, &error), 150.0625);
	EXPECT_FALSE(error);
}

TEST_F(Math_test_power, Limits)
{
	EXPECT_EQ(power(DBL_MAX, 2, &error), INFINITY);
	EXPECT_TRUE(error);
}

TEST_F(Math_test_power, Bad_exponent)
{
	EXPECT_EQ(power(50, -1, &error), 0);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(power(50, 2.5, &error), 0);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(power(50, -2.5, &error), 0);
	EXPECT_TRUE(error);
}

class Math_test_root : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test_root, Decimal_numbers)
{
	EXPECT_EQ(root(0, &error), 0);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(root(1, &error), 1);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(root(4, &error), 2);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(root(9, &error), 3);
	EXPECT_FALSE(error);
}

TEST_F(Math_test_root, Float_numbers)
{
	EXPECT_EQ(root(6.25, &error), 2.5);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(root(198.81, &error), 14.1);
	EXPECT_FALSE(error);
}

TEST_F(Math_test_root, Bad_numbers)
{
	EXPECT_EQ(root(-5, &error), 0);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(root(-2.2, &error), 0);
	EXPECT_TRUE(error);
}

class Math_test_pow : public ::testing::Test
{
public:

	bool error = false;
	
};

TEST_F(Math_test_pow, Zero_numbers)
{
	EXPECT_EQ(calc_pow(0, 5, &error), 0);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(calc_pow(0, 5.5, &error), 0);
	EXPECT_FALSE(error);
	
	EXPECT_EQ(calc_pow(0, -1, &error), 0);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(calc_pow(0, -1.5, &error), 0);
	EXPECT_TRUE(error);
}

TEST_F(Math_test_pow, Bad_numbers)
{
	
	EXPECT_EQ(calc_pow(-4, 2.5, &error), 0);
	EXPECT_TRUE(error);
	
	error = false;
	EXPECT_EQ(calc_pow(-3.5, 1.5, &error), 0);
	EXPECT_TRUE(error);
}
