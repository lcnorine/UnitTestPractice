/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_short_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_short_even_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("za");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_long_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("azza");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_long_even_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zaza");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_short_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zaz");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_short_odd_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zaa");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_long_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zazaz");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_long_odd_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zaazz");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_capital_short_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_capital_short_even_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zA");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_capital_long_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("azzA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_capital_long_even_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zazA");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_capital_short_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zaZ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_capital_short_odd_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zaA");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_capital_long_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zazaZ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_capital_long_odd_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("zaazZ");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_single_letter_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_nothing_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_ascending)
{
    Practice obj;
	int i1 = -1;
	int i2 = 0;
	int i3 = 1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,0);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_descending)
{
    Practice obj;
	int i1 = 1;
	int i2 = 0;
	int i3 = -1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,0);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_first_mixed_ascending)
{
    Practice obj;
	int i1 = 0;
	int i2 = -1;
	int i3 = 1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,0);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_first_mixed_descending)
{
    Practice obj;
	int i1 = 0;
	int i2 = 1;
	int i3 = -1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,0);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_last_mixed_ascending)
{
    Practice obj;
	int i1 = -1;
	int i2 = 1;
	int i3 = 0;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,0);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_last_mixed_descending)
{
    Practice obj;
	int i1 = 1;
	int i2 = -1;
	int i3 = 0;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,0);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_one_smaller_first)
{
    Practice obj;
	int i1 = -1;
	int i2 = 1;
	int i3 = 1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,1);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_one_smaller_middle)
{
    Practice obj;
	int i1 = 1;
	int i2 = -1;
	int i3 = 1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,1);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_one_smaller_last)
{
    Practice obj;
	int i1 = 1;
	int i2 = 1;
	int i3 = -1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,1);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_one_larger_first)
{
    Practice obj;
	int i1 = 1;
	int i2 = -1;
	int i3 = -1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,-1);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_one_larger_middle)
{
    Practice obj;
	int i1 = -1;
	int i2 = 1;
	int i3 = -1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,-1);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_one_larger_last)
{
    Practice obj;
	int i1 = -1;
	int i2 = -1;
	int i3 = 1;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,1);
	ASSERT_EQ(i2,-1);
	ASSERT_EQ(i3,-1);
}

TEST(PracticeTest, is_all_same)
{
    Practice obj;
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,0);
	ASSERT_EQ(i2,0);
	ASSERT_EQ(i3,0);
}