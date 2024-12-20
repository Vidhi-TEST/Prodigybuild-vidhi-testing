#include <gtest/gtest.h>
#include "../../lib/numericCppExamplesLib/lagrangeInterpolation.h"

TEST(LagrangeInterpolationTest, Test1) {
  Data<long double> data{std::vector<long double>{1, 2, 3},
                         std::vector<long double>{1, 4, 9}};
  auto poly = lagrangePoly(data);
  EXPECT_EQ(poly(2), 4);
}

TEST(LagrangeInterpolationTest, Test2) {
  Data<long double> data{std::vector<long double>{-1, 0, 1, 2},
                         std::vector<long double>{3, -4, 5, -6}};
  auto poly = lagrangePoly(data);
  EXPECT_EQ(poly(0.5), -0.5);
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}