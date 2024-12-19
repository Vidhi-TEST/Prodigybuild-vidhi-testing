#include <iostream>
#include "../../lib/numericCppExamplesLib/fixedPointIteration.h"
#include "../../lib/numericCppExamplesLib/test/fixedPointIterationTest.h"

int main(int argc, const char* argv[]) {
  // Calculate g(x) = x - (x^2 - 2) / (2*x)
  double p0 = 2;
  double tol = 1e-10;
  unsigned long N0 = 100;
  std::function<double(double)> g = [](double x) {
    return x - ((std::pow(x, 2) - 2) / (2 * x));
  };
  fixedPointIter(p0, tol, N0, g);

  // Run unit tests
  runFixedPointIterationTests();

  return 0;
}