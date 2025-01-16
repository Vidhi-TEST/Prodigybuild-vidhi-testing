```markdown
# Prodigybuild-vidhi-testing

This repository contains the C++ implementations of various numerical algorithms. These algorithms include Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator. The repository includes executable C++ files and unit tests for each algorithm.

## Pre-requisites

1. A C++ Compiler: You will need a C++ compiler installed on your machine. You are free to use either `g++` (Mac/Linux) or `clang` compilers.

2. Database: SQLite3 is used in this project. 

## Installation Guide

### Windows

Install GCC and SQLite3 for Windows:

1. Go to [MinGW-w64](https://mingw-w64.org/doku.php) and download the installer.
2. Follow the prompts to install.
3. Add the path where you installed MinGW to your system path.

SQLite3:

1. Download the precompiled binaries [here](https://www.sqlite.org/download.html).
2. Ensure SQLite is added to your system path.

### Mac

Use Homebrew to install GCC and SQLite for Mac:

1. `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
2. `brew install gcc`
3. `brew install sqlite3`

## Compilation & Execution

To compile your C++ programs, use the C++ compiler with the `-o` flag for the output file. For instance, to compile the 'BBPTypeFormula' file:

```bash
g++ ./cpp/BBPTypeFormula/main.cpp -o bbp
```

To execute the compiled program, use:

```bash
./bbp
```

Follow the same steps for all other C++ files in this repository.

## CI/CD Integration & Deployment

This project can be integrated with CI/CD for automatic testing and deployment. To achieve this, the necessary environment variables such as the database credentials need to be set up. 

## Finally

Please raise any issues you find with this repository, and they will be addressed promptly.
```
