```markdown
# Prodigybuild-vidhi-testing

Welcome to `Prodigybuild-vidhi-testing` repository! This is a valuable repository for you if you are into numerical computing using C++. It contains several C++ implementations of important numerical algorithms namely Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator.

## Pre-requisites

1. C++ Compiler: A C++ compiler is required on your machine to compile and run C++ programs. The recommended compilers are `g++` for Mac/Linux and `clang`.

2. SQLite3: For any requirements related to database, SQLite3 is recommended.

## Installation Guide

### Windows

Install GCC for Windows:

1. Visit the [MinGW-w64](https://mingw-w64.org/doku.php) and download the installer.
2. Follow the instructions to install.
3. After installation, add the path where you installed MinGW to your system path in environment variables.

Install SQLite3 for Windows:

1. Download the precompiled binaries from [SQLite3 Downloads Page](https://www.sqlite.org/download.html).
2. After downloading, ensure SQLite3 is added to your system path.

### Mac

Use Homebrew to install GCC and SQLite:

1. Open Terminal and paste the following command to install Homebrew: 
`/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
2. Install GCC: `brew install gcc`
3. Install SQLite3: `brew install sqlite3`

## Compilation & Execution

To compile your C++ programs, use the C++ compiler (`g++` or `clang`) and `-o` flag for the output file as follows:

```bash
# compile BBPTypeFormula example
g++ ./cpp/BBPTypeFormula/main.cpp -o bbp
```
For execution of the compiled program, run:

```bash
./bbp
```
Follow similar steps for all other C++ files in this repository.

## CI/CD Integration & Deployment

If you are utilizing a CI/CD pipeline, adapt the above-mentioned steps according to your pipeline requirements. It is advisable to set up any sensitive information such as database credentials as environment variables in your pipeline.

## In case of Issues

Feel free to create an issue in this repository for any bugs or improvements. Your feedback and contributions are appreciated!

Happy Coding!
```
