```markdown
# Prodigybuild-vidhi-testing

This repository contains implementations of various numerical algorithms in C++. The algorithms implemented consist of Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator. There is also integration with a SQLite database. This repository is a resource for developers aiming to study or implement numerical algorithms provided within.

## Pre-requisites

1. C++ Compiler: You will need a C++ compiler installed on your machine.

2. SQLite3: For any database requirements, SQLite3 is recommended.

## Installation Guide

### Windows

Install GCC for Windows:

1. Go to [MinGW-w64](https://mingw-w64.org/doku.php) and download the installer.
2. Follow the prompts to install.
3. Add the path where you installed MinGW to your system path.

Install SQLite3:

1. Download the precompiled binaries [here](https://www.sqlite.org/download.html).
2. Ensure SQLite is added to your system path.

### Mac

Use Homebrew to install GCC and SQLite:

1. `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
2. `brew install gcc`
3. `brew install sqlite3`

## Compilation & Execution

To compile your C++ programs, you have to use the C++ compiler (`g++` or `clang` recommended) and the `-o` flag for the output file. For example, to compile the BBPTypeFormula:

```bash
g++ ./cpp/BBPTypeFormula/main.cpp -o bbp
```
To execute the compiled program, use:

```bash
./bbp
```

Repeat same steps for all other C++ files in this repository.

## CI/CD Integration & Deployment

If you have a CI/CD pipeline, adapt the above steps to your pipeline needs. Most CI/CD tools support environment variables, so remember to set up any database credentials or other sensitive information as environment variables.

## Finally

Please raise any issues you find with this repository so they can be addressed promptly.
```