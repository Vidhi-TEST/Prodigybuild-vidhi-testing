#include <iostream>
#include "../../lib/numericCppExamplesLib/devrandom.h"
#include "../../lib/numericCppExamplesLib/lcg.h"

int main(int argc, const char* argv[]) {
  // Linear congruential generator
  std::vector<int> rndInt = lcg(7, 10, 7, 7, 12);
  for (int i = 0; i < rndInt.size(); i++) {
    std::cout << rndInt[i] << std::endl;
  }
  // /dev/random
  devrandom<int>();
  devrandom<float>();
  devrandom<char>();
  return 0;
}

// Unit tests

// Test lcg function
void test_lcg() {
  std::vector<int> expected = {7, 9, 6, 8, 5, 7, 4, 6, 3, 5, 2, 4};
  std::vector<int> actual = lcg(7, 10, 7, 7, 12);
  assert(expected == actual);
}

// Test devrandom function
void test_devrandom() {
  // Test devrandom<int>
  devrandom<int>();
  // Test devrandom<float>
  devrandom<float>();
  // Test devrandom<char>
  devrandom<char>();
}

// Run all unit tests
void run_tests() {
  test_lcg();
  test_devrandom();
}

// Run unit tests if compiled with -DUNIT_TESTS flag
#ifdef UNIT_TESTS
int main() {
  run_tests();
  return 0;
}
#endif