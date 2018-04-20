
#include <gtest/gtest.h>
#include <Calculator.h>

TEST(CalculatorTest, Sum) {
  std::unique_ptr<Calculator> calculator(new Calculator);
  EXPECT_EQ(4, calculator->sum(2, 2));
}

