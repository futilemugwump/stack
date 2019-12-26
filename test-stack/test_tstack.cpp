#include "..//Project1/stack.h"

#include "gtest.h"

TEST(TStack, can_create_stack_with_positive_length)
{
  ASSERT_NO_THROW(TStack<int> bf(4));
}
TEST(TStack, cant_create_stack_with_negative_length)
{
	ASSERT_ANY_THROW(TStack<int> bf(-4));
}
TEST(TStack, can_insert_an_element_to_stack)
{
	TStack<int> bf(4);
	ASSERT_NO_THROW(bf.Push(5));
}
TEST(TStack, can_get_an_element_from_the_stack)
{
	TStack<int> bf(2);
	bf.Push(2);
	bf.Push(3);
	ASSERT_NO_THROW(bf.Pop());
}
TEST(TStack, cant_get_an_element_from_the_empty_stack)
{
	TStack<int> bf(2);
	ASSERT_ANY_THROW(bf.Pop());
}
TEST(TStack, cant_push_an_element_into_full_stack)
{
	TStack<int> bf(2);
	bf.Push(1);
	bf.Push(1);
	ASSERT_ANY_THROW(bf.Push(3));
}
TEST(TStack, can_cleaR_stack)
{
	TStack<int> bf(3);
	bf.Clear();
	EXPECT_EQ(true, bf.IsEmpty());
}
TEST(TStack, can_get_the_top_element)
{
	TStack<int> bf(2);
	bf.Push(2);
	bf.Push(3);
	ASSERT_NO_THROW(bf.Top());
}
TEST(TStack, checking_IsEmpty_function)
{
	TStack<int> bf(2);
	EXPECT_EQ(bf.IsEmpty(), 1);
	bf.Push(2);
	EXPECT_NE(bf.IsEmpty(), 1);
}
TEST(TStack, checking_IsFull_function)
{
	TStack<int> bf(2);
	EXPECT_NE(bf.IsFull(), 1);
	bf.Push(2);
	bf.Push(3);
	EXPECT_EQ(bf.IsFull(), 1);
}
