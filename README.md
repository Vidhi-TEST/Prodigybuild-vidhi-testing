```markdown
# Prodigybuild-vidhi-testing

Welcome to *Prodigybuild-vidhi-testing*. This repository is home to various numerical algorithms implemented in C++. The repository includes implementations of Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator.

## Prerequisites

1. **C++ Compiler:** A C++ compiler, such as `g++` or `clang`, is required to compile the C++ files in this repository.

2. **SQLite3:** For database requirements, the SQLite3 database engine is needed.

## Setup Instructions

Below are the instructions for setting up the prerequisites and getting started with this repository on your local machine.

### Windows

**GCC Installation:**

1. Visit the [MinGW-w64](https://mingw-w64.org/doku.php) official website and download the installer.
2. Follow the prompts to install the MinGW-w64.
3. Add the path where MinGW is installed to your system path.

**SQLite3 Installation:**

1. Visit the official SQLite download page [here](https://www.sqlite.org/download.html) and download the precompiled binaries for SQLite.
2. Add SQLite to your system path.

### Mac

**GCC & SQLite3 Installation:**

1. Open a terminal and install Homebrew by pasting the following command and hit enter:
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
2. Once Homebrew is installed, install GCC and SQLite3 using the following commands:
```
brew install gcc
brew install sqlite3
```

## Building & Running the Project

**Compilation:**

To compile the C++ files from this repository, use the C++ compiler you have installed (`g++` or `clang`) along with the `-o` flag as shown below:
```
g++ ./cpp/<PROGRAM_NAME>/main.cpp -o <PROGRAM_NAME>
```

**Execution:**

To execute the compiled file, open a terminal and use the command below:
```
./<PROGRAM_NAME>
```

Repeat the above steps for all other C++ files in the repository.

## CI/CD Integration and Deployment

The steps for building and executing the programs in this repository can be included in your CI/CD pipeline. If using environment variables for sensitive information like database credentials, be sure to set them up in your CI/CD environment.

## Conclusion

If you encounter any problems or bugs using this repository, kindly raise an issue so they can be addressed promptly. Thank you.
```
