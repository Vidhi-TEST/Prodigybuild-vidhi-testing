#include <gtest/gtest.h>
#include "../../lib/numericCppExamplesLib/bbpTypeFormula.h"

TEST(BBPTypeFormulaTest, PiApproximation) {
  double pi_approx = P(1, 16, 8, std::vector<int>{4, 0, 0, -2, -1, -1, 0, 0}, 10);
  EXPECT_NEAR(pi_approx, 3.1415926535, 0.0000000001);
}

TEST(BBPTypeFormulaTest, LnApproximation) {
  double ln_approx = P(1, 4, 2, std::vector<int>{1, 0}, 10);
  EXPECT_NEAR(ln_approx, 1.0986122887, 0.0000000001);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}