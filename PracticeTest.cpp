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

TEST(PracticeTest, is_even_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("BaB");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_single_letter_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_ascending)
{
    Practice obj;
	int i1 = 1;
	int i2 = 2;
	int i3 = 3;
    obj.sortDescending(i1,i2,i3);
    ASSERT_EQ(i1,3);
	ASSERT_EQ(i2,2);
}