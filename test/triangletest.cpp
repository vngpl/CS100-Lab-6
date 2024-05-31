#include <gtest/gtest.h>
#include "../lib/Triangle.h"
using shapes::Triangle;


TEST(TriangleTests, testPerimeter1) {
  Triangle *aTriangle = new Triangle(3,3,3);
  EXPECT_EQ (aTriangle->getPerimeter(),9);
}

TEST(TriangleTests, testPerimeter2) {
  Triangle *aTriangle = new Triangle(5, 5, 5);
  EXPECT_TRUE(aTriangle->getPerimeter() == 15);
}

// 3 tests to check perimeter, area, and kind
TEST(TriangleTests, testPerimeter3) {
  Triangle *aTriangle = new Triangle(3, 2, 3);
  ASSERT_EQ(aTriangle->getPerimeter(), 8);
}

TEST(TriangleTests, testArea1) {
  Triangle *aTriangle = new Triangle(5, 4, 3);
  EXPECT_DOUBLE_EQ(aTriangle->getArea(), 6.0);
}

TEST(TriangleTests, testArea2) {
  Triangle *aTriangle = new Triangle(10, 8, 6);
  EXPECT_TRUE(aTriangle->getArea() == 24.0);
}

TEST(TriangleTests, testArea3) {
  Triangle *aTriangle = new Triangle(15, 12, 9);
  ASSERT_DOUBLE_EQ(aTriangle->getArea(), 54.0);
}

TEST(TriangleTests, testKindEq1) {
  Triangle *aTriangle = new Triangle(3, 3, 3);
  ASSERT_TRUE(aTriangle->isEquilateral());
}

TEST(TriangleTests, testKindEq2) {
  Triangle *aTriangle = new Triangle(5, 5, 5);
  EXPECT_TRUE(aTriangle->isEquilateral());
}

TEST(TriangleTests, testKindEq3) {
  Triangle *aTriangle = new Triangle(4, 3, 3);
  ASSERT_FALSE(aTriangle->isEquilateral());
}

// 1 test to check death
TEST(TriangleTests, testDeath) {
  EXPECT_DEATH({Triangle tri(1, 1, 2);}, "invalid triangle");
}

// 3 additional tests
TEST(TriangleTests, testNoThrow) {
  EXPECT_NO_THROW({Triangle tri(5, 4, 3);});
}

// TEST(TriangleTests, testThrow) {
//   EXPECT_THROW({Triangle tri(-5, 4, 3);}, std::invalid_argument);
// }

TEST(TriangleTests, testIso1) {
  Triangle *aTriangle = new Triangle(3, 3, 2);
  ASSERT_TRUE(aTriangle->isIsosceles());
}
TEST(TriangleTests, testIso2) {
  Triangle *aTriangle = new Triangle(4, 4, 3);
  EXPECT_TRUE(aTriangle->isIsosceles());
}
TEST(TriangleTests, testIso3) {
  Triangle *aTriangle = new Triangle(10, 8, 6);
  ASSERT_FALSE(aTriangle->isIsosceles());
}

TEST(TriangleTests, testScal1) {
  Triangle *aTriangle = new Triangle(5, 4, 3);
  EXPECT_EQ(aTriangle->getKind(), Triangle::Kind::SCALENE);
}
TEST(TriangleTests, testScal2) {
  Triangle *aTriangle = new Triangle(7, 7, 6);
  EXPECT_TRUE(aTriangle->getKind() == Triangle::Kind::ISOSCELES);
}
TEST(TriangleTests, testScal3) {
  Triangle *aTriangle = new Triangle(5, 5, 5);
  ASSERT_TRUE(aTriangle->getKind() == Triangle::Kind::EQUILATERAL);
}