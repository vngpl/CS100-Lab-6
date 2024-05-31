#include <gtest/gtest.h>

#include "../lib/testsubject.h"

TEST(MathTest, Square1) {
    ASSERT_EQ(TestSubject::square(2), 4);
}

TEST(MathTest, Square2) {
    EXPECT_TRUE(TestSubject::square(3) == 9);
}

TEST(MathTest, Square3) {
    EXPECT_EQ(TestSubject::square(-2), 4);
}

TEST(MathTest, isEven) {
    ASSERT_TRUE(TestSubject::isEven(4));
}
TEST(MathTest, isEvenOddNum) {
    ASSERT_FALSE(TestSubject::isEven(5));
}
TEST(MathTest, isEvenNegativeNum) {
    EXPECT_TRUE(TestSubject::isEven(-4));
}