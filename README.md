```markdown
# Prodigybuild-vidhi-testing

This repository contains various C++ implementations of numerical algorithms. This includes implementations of Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator. 

## Pre-requisites

1. C++ 17 Compiler: You will need a C++ compiler installed on your machine. This project requires C++17 for compiling the project files. For both Mac and Windows, you can install GCC or the LLVM Clang compiler.

2. SQLite3: For any database requirements, SQLite3 is recommended.


## Installation Guide

### Windows

**Installing GCC for Windows:**

1. Go to [MinGW-w64](https://mingw-w64.org/doku.php) and download the installer.
2. Follow the prompts to install.
3. Add the path where you installed MinGW to your system path.

**Installing SQLite3:**

1. Download the precompiled binaries [here](https://www.sqlite.org/download.html).
2. Ensure SQLite is added to your system path.

### Mac

**Installing GCC and SQLite with Homebrew:**

1. First, install Homebrew using the following command:
   
   ```/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"```
   
2. Then install GCC and SQLite3:

   ```brew install gcc```
   
   ```brew install sqlite3```

## Compilation & Execution

To compile your C++ programs, you will have to use the C++ compiler (GCC or Clang) with the `-std=c++17` flag. The `-o` flag is used to specify the output file. For instance, to compile the BBPTypeFormula:

```bash
g++ -std=c++17 ./cpp/BBPTypeFormula/main.cpp -o bbp
```

To execute the compiled program, you can use:

```bash
./bbp
```

Follow the same steps for all other C++ files in this repository.

## Environment Setup & CI/CD Integration

Adapt the above steps to your needs if you have a CI/CD pipeline. Most CI/CD tools support environment variables, so setup any database credentials or other sensitive information as environment variables.

## Finally

Please raise any issues you find with this repository, they will be addressed promptly.
```
