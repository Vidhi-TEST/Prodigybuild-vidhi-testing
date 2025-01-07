```markdown
# Prodigybuild-vidhi-testing

This repository contains various C++ implementations of numerical algorithms. These include Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator. 

## Pre-requisites

1. C++ Compiler: You will need a C++ compiler (GCC or Clang) installed on your machine.
2. SQLite3: This is required for any database interactions.

## Installation Guide

### Windows

#### GCC

1. Download the Mingw-w64 installer from [here](https://mingw-w64.org/doku.php). 
2. Follow the prompts to install.
3. Add the path where you installed MinGW to your system path.

#### SQLite3

1. Download the precompiled binaries from [SQLite Official](https://www.sqlite.org/download.html).
2. Make sure SQLite3 is added to your system path. 

### Mac

#### Homebrew, GCC and SQLite

Homebrew serves as a package manager for Mac and can be used to install GCC and SQLite.

1. Install Homebrew: `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
2. Install GCC: `brew install gcc`
3. Install SQLite3: `brew install sqlite3`

## Compilation & Execution

Compile your C++ programs using the C++ compiler (preferably GCC or Clang) and the `-o` flag.

For instance, to compile the BBPTypeFormula:

```bash
g++ cpp/BBPTypeFormula/main.cpp -o bbp
```

To execute the compiled program:

```bash
./bbp
```

Please follow these steps to compile and execute all other C++ files in this repository.

## CI/CD Integration & Deployment

If you have a CI/CD pipeline, adapt the steps described above according to your pipeline needs. Make sure to set up any database credentials or other sensitive information as environment variables as most CI/CD tools support these. 

## Conclusion

If you come across any bugs or issues, please report them so that they can be addressed promptly. Your contributions to improving this project are most welcome!
```