#include <iomanip>
#include <iostream>
#include <numeric>
#include "../../lib/numericCppExamplesLib/brentSalaminFormula.h"

int main() {
  auto appr_pi = calc_pi<long double>(15);
  std::cout << std::setprecision(17);
  std::cout << M_PI << std::endl;
  std::cout << appr_pi << std::endl;
  return 0;
}

// Test cases
#include <cassert>

void test_calc_pi() {
  // Test case 1
  long double pi = calc_pi<long double>(15);
  assert(std::abs(pi - M_PI) < 1e-15);

  // Test case 2
  pi = calc_pi<long double>(10);
  assert(std::abs(pi - M_PI) < 1e-10);
}

int main() {
  test_calc_pi();
  return 0;
}