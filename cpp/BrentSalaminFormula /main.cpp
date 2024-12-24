#include <gtest/gtest.h>
#include <iomanip>
#include <iostream>
#include <numeric>
#include "../../lib/numericCppExamplesLib/brentSalaminFormula.h"

TEST(BrentSalaminFormulaTest, CalculatePi) {
  auto appr_pi = calc_pi<long double>(15);
  EXPECT_NEAR(appr_pi, M_PI, 1e-15);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}