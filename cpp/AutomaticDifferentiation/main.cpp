#include <gtest/gtest.h>
#include "../../lib/numericCppExamplesLib/dualNumbers.h"

TEST(DualNumbersTest, DerivativeTest) {
  Dual x(2, 1);
  Dual f = 5 * pow(x, 2) + 4 * x + 1;
  EXPECT_EQ(f.dual, 14);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}