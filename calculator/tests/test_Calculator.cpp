#include <gtest/gtest.h>

#include  "../src/calculator.hpp"

TEST(TestCalculator, Integer)
{
    Calculator<int> c (10, 10);
    EXPECT_EQ (c.add(), 20);
    EXPECT_EQ (c.subtract(), 0);
    EXPECT_EQ (c.multiply(), 100);
    EXPECT_EQ (c.divide(), 1);

    // CORREÇÃO: Evitar divisão por zero
    // Teste com divisor diferente de zero
    Calculator<int> c2 (15, 3);
    EXPECT_EQ (c2.divide(), 5);

}

TEST(TestCalculator, Double)
{
    Calculator<double> c (10.0, 0.5);
    EXPECT_EQ (c.add(), 10.5);
    EXPECT_EQ (c.subtract(), 9.5);
    EXPECT_EQ (c.multiply(), 5);
    EXPECT_EQ (c.divide(), 20);

    // CORREÇÃO: Evitar divisão por zero
    // Teste com divisor diferente de zero
    Calculator<double> c2 (12.0, 3.0);
    EXPECT_EQ (c2.divide(), 4.0);
