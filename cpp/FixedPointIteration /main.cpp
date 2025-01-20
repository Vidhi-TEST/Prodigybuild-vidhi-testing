#include <iostream>
#include "../../lib/numericCppExamplesLib/fixedPointIteration.h"

// Test cases
void test_fixedPointIter() {
  double p0 = 2;
  double tol = 1e-10;
  unsigned long N0 = 100;
  std::function<double(double)> g = [](double x) {
    return x - ((std::pow(x, 2) - 2) / (2 * x));
  };

  double result = fixedPointIter(p0, tol, N0, g);
  assert(std::abs(result - 1.4142135623730951) < 1e-10);
}

int main() {
  test_fixedPointIter();
  return 0;
}