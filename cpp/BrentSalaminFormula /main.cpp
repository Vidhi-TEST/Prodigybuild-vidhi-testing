#include <gtest/gtest.h>
#include <numeric>
#include "../../lib/numericCppExamplesLib/brentSalaminFormula.h"

TEST(BrentSalaminFormulaTest, CalculatePi) {
  long double expected = M_PI;
  long double actual = calc_pi<long double>(15);
  EXPECT_NEAR(expected, actual, 1e-10);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}