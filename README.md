```markdown
# Prodigybuild-vidhi-testing

This is a repository for algorithms written in C++. The algorithms are implementations of various numerical methods and patterns. These include Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator. 

## Pre-requisites

1. C++ Compiler: You will need a C++ compiler installed on your machine. GCC (GNU Compiler Collection) is a recommended one, but Clang can also be used.

2. SQLite3: SQLite3 is required for handling any database related operations.

## Installation Guide

### Windows

To install required software on Windows:

GCC:

1. Go to the [MinGW-w64](https://mingw-w64.org/doku.php) Homepage.
2. Download the MinGW installation manager.
3. Install the C++ compiler.

To add GCC to the path:

1. Open the system settings.
2. Click on 'Advanced system settings' and then 'Environment Variables'.
3. Add the bin directory path of MinGW installation to the PATH variable.

SQLite3:

1. Download the precompiled SQLite binaries for Windows from the [SQLite Downloads](https://www.sqlite.org/download.html) page.
2. Extract the downloaded zip file.
3. Add sqlite3.exe's directory path to the PATH environment variable similar to above.

### Mac

To install required software on Mac:

1. Install Homebrew: `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
2. Install GCC: `brew install gcc`
3. Install SQLite3: `brew install sqlite3`

## Building and Running the Project

To compile your C++ programs, run the following command (change filename as required):

```bash
g++ ./cpp/BBPTypeFormula/main.cpp -o bbp
```

To run the compiled program, use:

```bash
./bbp
```

This pattern can be followed for all other C++ files in this repository.

## CI/CD Integration & Deployment

If you are using a CI/CD pipeline, ensure that you set up any database credentials or other sensitive information as environment variables. Your CI/CD platform should support this. 

Steps would primarily involve checking out the project, installing dependencies (for example, a C++ compiler and SQLite), building the project using the above mentioned gcc command and then deploying it.

## Notes

If you encounter bugs or have improvements in mind, feel free to raise issues or suggest changes.
```
