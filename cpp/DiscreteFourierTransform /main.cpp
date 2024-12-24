#include "../../lib/numericCppExamplesLib/discreteFourierTransform.h"
#include <gtest/gtest.h>

TEST(DiscreteFourierTransformTest, DFTTest) {
  CVec<> x({1, 2, 3, 4, 5, 6, 7, 8});
  auto y = dft(x);
  std::vector<std::complex<double>> expected_y = {
    std::complex<double>(36, 0),
    std::complex<double>(-4, 9.65685424949238),
    std::complex<double>(-4, 4),
    std::complex<double>(-4, 1.6568542494923806),
    std::complex<double>(-4, 0),
    std::complex<double>(-4, -1.6568542494923806),
    std::complex<double>(-4, -4),
    std::complex<double>(-4, -9.65685424949238)
  };
  ASSERT_EQ(y.size(), expected_y.size());
  for (int i = 0; i < y.size(); i++) {
    ASSERT_DOUBLE_EQ(y[i].real(), expected_y[i].real());
    ASSERT_DOUBLE_EQ(y[i].imag(), expected_y[i].imag());
  }
}

TEST(DiscreteFourierTransformTest, IDFTTest) {
  CVec<> y({
    std::complex<double>(36, 0),
    std::complex<double>(-4, 9.65685424949238),
    std::complex<double>(-4, 4),
    std::complex<double>(-4, 1.6568542494923806),
    std::complex<double>(-4, 0),
    std::complex<double>(-4, -1.6568542494923806),
    std::complex<double>(-4, -4),
    std::complex<double>(-4, -9.65685424949238)
  });
  auto x = idft(y);
  std::vector<std::complex<double>> expected_x = {
    std::complex<double>(1, 0),
    std::complex<double>(2, 0),
    std::complex<double>(3, 0),
    std::complex<double>(4, 0),
    std::complex<double>(5, 0),
    std::complex<double>(6, 0),
    std::complex<double>(7, 0),
    std::complex<double>(8, 0)
  };
  ASSERT_EQ(x.size(), expected_x.size());
  for (int i = 0; i < x.size(); i++) {
    ASSERT_DOUBLE_EQ(x[i].real(), expected_x[i].real());
    ASSERT_DOUBLE_EQ(x[i].imag(), expected_x[i].imag());
  }
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}