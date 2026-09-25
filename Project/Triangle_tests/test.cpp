#include "pch.h"
#include "Triangle.h"
#include <stdexcept>
TEST(TriangleTest, CalculateArea) {
    Triangle t(10, 5);
    double area = t.calculate_S();
    EXPECT_DOUBLE_EQ(area, 25.0);
}
TEST(TriangleTest, Getters) {
    Triangle t(7, 3);
    EXPECT_DOUBLE_EQ(t.get_side(), 7.0);
    EXPECT_DOUBLE_EQ(t.get_height(), 3.0);
}

TEST(TriangleTest, Setters) {
    Triangle t(1, 1);
    t.set_side(8);
    t.set_height(4);
    EXPECT_DOUBLE_EQ(t.get_side(), 8.0);
    EXPECT_DOUBLE_EQ(t.get_height(), 4.0);
}
TEST(TriangleTest, AreaAfterSetters) {
    Triangle t(2, 3);
    t.set_side(10);
    t.set_height(5);
    EXPECT_DOUBLE_EQ(t.calculate_S(), 25.0);
}

TEST(TriangleTest, ConstructorRejectsInvalidValues) {
    EXPECT_THROW(Triangle(0, 5), std::invalid_argument);
    EXPECT_THROW(Triangle(-1, 5), std::invalid_argument);
    EXPECT_THROW(Triangle(5, 0), std::invalid_argument);
    EXPECT_THROW(Triangle(5, -1), std::invalid_argument);
}

TEST(TriangleTest, SettersRejectInvalidValues) {
    Triangle t(5, 3);

    EXPECT_THROW(t.set_side(0), std::invalid_argument);
    EXPECT_THROW(t.set_side(-1), std::invalid_argument);
    EXPECT_THROW(t.set_height(0), std::invalid_argument);
    EXPECT_THROW(t.set_height(-1), std::invalid_argument);
}