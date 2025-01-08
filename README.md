```markdown
# Prodigybuild-vidhi-testing

This repository provides a collection of numerical algorithms written in C++. Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and Random Number Generator are among the implementations available. SQLite3 is used for any database requirements. Continuous Integration/Continuous Deployment (CI/CD) pipeline support is also available.

## Pre-requisites

1. C++ Compiler: Either `g++` (Mac/Linux) or `clang` compilers.
2. SQLite3

## Installtion Guide

You need to install a C++ compiler and SQLite3 to run the code in the repository. 

### Windows

- **GCC installation on Windows**

    1. Download the installer from the [MinGW-w64](https://mingw-w64.org/doku.php) page.
    2. Install it following the instructions.
    3. Don't forget to add the MinGW installation location to the system path.

- **SQLite3 installation on Windows**

    1. Download the precompiled binaries from the SQLite's [download page](https://www.sqlite.org/download.html).
    2. Add the SQLite installation location to the system path.

### Mac

- **Installation on Mac**

    1. Install Homebrew by running `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
    2. Install GCC through Homebrew by `brew install gcc`
    3. Install SQLite3 through Homebrew by `brew install sqlite3`

## Compilation & Execution

After installing the required software, you can compile and execute the C++ programs using either `g++` or `clang` compilers. To compile the BBPTypeFormula:

```bash
g++ ./cpp/BBPTypeFormula/main.cpp -o bbp
```

Running the output file:

```bash
./bbp
```

The same process can be applied to all other C++ files in this repository.

## CI/CD Integration & Deployment

If you have a CI/CD pipeline, please follow the steps below. It's recommended to keep sensitive information like database credentials in the environment variables for security.

- Set up environment variables for sensitive information in your CI/CD tool.
- Update your pipeline to execute the commands listed in Compilation & Execution as per your CI/CD tool's guidelines.

Lastly, if you come across any issues, please create a new issue on the repository so it can be resolved promptly.
```
