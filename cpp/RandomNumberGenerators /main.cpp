#include <gtest/gtest.h>
#include "../../lib/numericCppExamplesLib/devrandom.h"
#include "../../lib/numericCppExamplesLib/lcg.h"

TEST(RandomNumberGeneratorsTest, LCGTest) {
  std::vector<int> expected = {7, 4, 1, 8, 5, 2, 9, 6, 3, 0};
  std::vector<int> actual = lcg(7, 10, 7, 7, 12);
  ASSERT_EQ(expected, actual);
}

TEST(RandomNumberGeneratorsTest, DevRandomTest) {
  // Test devrandom<int>()
  int rndInt = devrandom<int>();
  ASSERT_TRUE(rndInt >= std::numeric_limits<int>::min() && rndInt <= std::numeric_limits<int>::max());

  // Test devrandom<float>()
  float rndFloat = devrandom<float>();
  ASSERT_TRUE(rndFloat >= 0.0f && rndFloat <= 1.0f);

  // Test devrandom<char>()
  char rndChar = devrandom<char>();
  ASSERT_TRUE(rndChar >= std::numeric_limits<char>::min() && rndChar <= std::numeric_limits<char>::max());
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}