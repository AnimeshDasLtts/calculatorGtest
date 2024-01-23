// tests/test_calculator.cpp
#include "gtest/gtest.h"
#include "calculator.h"

TEST(Calculator, Add) {
    Calculator calc;
    EXPECT_EQ(8, calc.add(5, 3));
}

TEST(Calculator, Subtract) {
    Calculator calc;
    EXPECT_EQ(2, calc.subtract(5, 3));
}

TEST(Calculator, Multiply) {
    Calculator calc;
    EXPECT_EQ(15, calc.multiply(5, 3));
}

TEST(Calculator, Divide) {
    Calculator calc;
    EXPECT_EQ(2, calc.divide(6, 3));
}

TEST(Calculator, DivideByZero) {
    Calculator calc;
    EXPECT_EQ(0, calc.divide(6, 0));
}
