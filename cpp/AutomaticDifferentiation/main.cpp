#include "../../lib/numericCppExamplesLib/dualNumbers.h"
#include <iostream>

int main() {
  Dual x(2, 1);
  Dual f = 5 * pow(x, 2) + 4 * x + 1;
  std::cout << "Derivative of 5x^2+4x+1 at x = 2 is: " << f.dual << std::endl;
  return 0;
}

#include <iomanip>
#include <iostream>
#include "../../lib/numericCppExamplesLib/bbpTypeFormula.h"

int main() {
  std::cout << "BBP Type formula implementation" << std::endl;
  std::cout << "Pi approximation: " << std::setprecision(10) << P(1, 16, 8, std::vector<int>{4, 0, 0, -2, -1, -1, 0, 0}, 10) << std::endl;
  std::cout << "ln(3) approximation: " << std::setprecision(10) << P(1, 4, 2, std::vector<int>{1, 0}, 10) << std::endl;
  return 0;
}

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

#include "../../lib/numericCppExamplesLib/discreteFourierTransform.h"
#include <iostream>

int main() {
  CVec<> x({1, 2, 3, 4, 5, 6, 7, 8});
  auto y = dft(x);
  std::cout << std::showpos;
  for (auto yi : y) {
    std::cout << yi.real() << yi.imag() << "i" << std::endl;
  }
  auto x_ = idft(y);
  for (auto xi : x_) {
    std::cout << xi.real() << xi.imag() << "i" << std::endl;
  }
  return 0;
}

#include "../../lib/numericCppExamplesLib/fixedPointIteration.h"
#include <iostream>

int main(int argc, const char* argv[]) {
  // Calculate g(x) = x - (x^2 - 2) / (2 * x)
  double p0 = 2;
  double tol = 1e-10;
  unsigned long N0 = 100;
  std::function<double(double)> g = [](double x) {
    return x - ((std::pow(x, 2) - 2) / (2 * x));
  };
  fixedPointIter(p0, tol, N0, g);
  return 0;
}

#include "../../lib/numericCppExamplesLib/lagrangeInterpolation.h"
#include <iostream>

int main() {
  Data<long double> data1{std::vector<long double>{1, 2, 3}, std::vector<long double>{1, 4, 9}};
  auto poly1 = lagrangePoly(data1);
  std::cout << poly1(2) << std::endl;
  Data<long double> data2{std::vector<long double>{-1, 0, 1, 2}, std::vector<long double>{3, -4, 5, -6}};
  auto poly2 = lagrangePoly(data2);
  std::cout << poly2(0.5) << std::endl;
  return 0;
}

#include "../../lib/numericCppExamplesLib/devrandom.h"
#include "../../lib/numericCppExamplesLib/lcg.h"
#include <iostream>

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