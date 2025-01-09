```markdown
# Prodigybuild-vidhi-testing

This repository contains C++ implementations of various numerical algorithms. These include Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator. These implementations offer a practical approach to understanding and applying numerical analysis in C++. 

## Pre-requisites

1. C++ Compiler: You will need to have a C++ compiler (such as `g++` for Linux or Mac, `clang` for Mac, or MinGW-w64 for Windows) installed on your machine.

2. SQLite3: This is recommended for any database requirements.

## Setup

### Windows

1. Install GCC for Windows
   - Go to the [MinGW-w64](https://mingw-w64.org/doku.php) site and download the installer.
   - Run the installer and follow the prompts to install.
   - Add the path where you installed MinGW to your system PATH.

2. Install SQLite3
   - Download the precompiled binaries from the [SQLite3](https://www.sqlite.org/download.html) download page.
   - Ensure SQLite is added to your system PATH.

### MacOS
You can use Homebrew to install GCC and SQLite:

1. Install Homebrew by running the following command in your terminal:

   ```bash
   /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
   ```

2. Install GCC and SQLite:

   ```bash
   brew install gcc sqlite3
   ```

## Compilation & Execution

To compile your C++ programs, use the `clang` or `g++` compilers and the `-o` flag for the output file. For instance, to compile the BBPTypeFormula:

```bash
g++ -std=c++11 ./cpp/BBPTypeFormula/main.cpp -o bbp
```

To execute the compiled program, use:

```bash
./bbp
```

Follow the same steps for all other C++ files in this repository.

## CI/CD Integration & Deployment

If you're using a CI/CD pipeline, adapt the above steps to your pipeline's requirements. Most tools support environment variables, so remember to set up any database credentials or other sensitive information as environment variables. 

## Finally

Please raise any issues you find with this repository so they can be addressed promptly.
```