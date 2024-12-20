//
//  main.cpp
//  FixedPointIteration
//
//

#include <iostream>
#include "../../lib/numericCppExamplesLib/fixedPointIteration.h"

int main(int argc, const char* argv[]) {
  // Calculate g(x) = x - (x^2 - 2) / (2*x)
  double p0 = 2;
  double tol = 1e-10;
  unsigned long N0 = 100;
  std::function<double(double)> g = [](double x) {
    return x - ((std::pow(x, 2) - 2) / (2 * x));
  };
  fixedPointIter(p0, tol, N0, g);
  return 0;
}

// Unit Test Cases
#include <cassert>

void test_fixedPointIter() {
  double p0 = 2;
  double tol = 1e-10;
  unsigned long N0 = 100;
  std::function<double(double)> g = [](double x) {
    return x - ((std::pow(x, 2) - 2) / (2 * x));
  };
  
  double result = fixedPointIter(p0, tol, N0, g);
  assert(result == 1.4142135623730951);
}

int main() {
  test_fixedPointIter();
  return 0;
}