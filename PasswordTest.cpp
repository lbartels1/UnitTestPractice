/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, repeated_letter_password)
{
	Password my_password;
	ASSERT_EQ(5, my_password.count_leading_characters("ZZZZZ"));
}

TEST(PasswordTest, two_leading_a)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("aab"));
}

TEST(PasswordTest, capital_letter_start)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("Aab"));
}

TEST(PasswordTest, lower_letter_start)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("Aab"));
}
