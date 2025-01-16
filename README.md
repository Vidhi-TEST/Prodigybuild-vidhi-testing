```markdown
# Prodigybuild-vidhi-testing

This repository houses a collection of numerical algorithms implemented using the C++ programming language. In this repository you will find implementations for the following:

- Automatic Differentiation
- BBP Type Formula
- Brent Salamin Formula
- Discrete Fourier Transform
- Fixed Point Iteration
- Lagrange Interpolation
- Random Number Generator. 
  
## Pre-requisites

Before you can run this repository, you will need to ensure you have the following installed:

1. C++ Compiler: GCC or Clang is recommended.
2. SQLite3: This is the recommended database.

## Installation Guide

Here is a guide to installing the requirements for both Mac and Windows:

### Installing the C++ Compiler and SQLite3 on Windows

1. [MinGW-w64](https://mingw-w64.org/doku.php) is the recommended GCC for Windows. Download and install from the link.
2. Add the MinGW path to your system path.
3. Download precompiled SQLite3 binaries from this [link](https://www.sqlite.org/download.html). Ensure SQLite is added to your system path.

### Installing the C++ Compiler and SQLite3 on Mac

Mac installations will use Homebrew. Run the following commands in your terminal:

1. `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"` to install homebrew.
2. `brew install gcc` to install the C++ compiler.
3. `brew install sqlite3` to install SQLite3.

## Compilation & Execution
  
To compile and run the provided C++ programs:

1. Use your C++ compiler (either `g++` or `clang`) to compile. For example, if you wanted to compile and run 'main.cpp' for BBP Type Formula, you'd run `g++ ./cpp/BBPTypeFormula/main.cpp -o bbp`.
2. Run your compiled program with `./<your-file-name>`. Following the above example, you would run `./bbp`.

## CI/CD Integration & Deployment

In the case you have a CI/CD pipeline, you'd adapt the above steps to suit your needs. For sensitive information such as database credentials, use environment variables.

## Finally

If you find an issue with this repository or have a feature request, please raise an issue so it can be addressed.
```
