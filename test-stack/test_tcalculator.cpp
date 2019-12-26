#include "gtest.h"
#include "..//Project1/calculator.h"
#include <string>

TEST(TCalculator, can_create_calc)
{
	
	ASSERT_NO_THROW(TCalculator C);
	
}
TEST(TCalculator, can_set_and_get_EXPRESSION)
{
	TCalculator C;
	C.SetExpr("2");
	std::string tmp = "2";
	EXPECT_EQ(C.GetExpr(),tmp);
}

TEST(TCalculator, can_make_postfix)
{
	TCalculator c;
	c.SetExpr("13 + 4");
	c.ToPostfix();
	ASSERT_NO_THROW(c.GetPostfix());
}
TEST(TCalculator, cAnT_calculate_with_wrong_number_of_brackets)
{
	TCalculator c;
	c.SetExpr("13 - 4)");
	EXPECT_FALSE(c.CheckBrackets());
}
TEST(TCalculator, incorrect_expression)
{
	TCalculator c;
	c.SetExpr("qq");
	ASSERT_ANY_THROW(c.Calc());
}