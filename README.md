```markdown
# Prodigybuild-vidhi-testing

Welcome, this repository contains various C++ implementations of numerical algorithms. These range from Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, to Lagrange Interpolation, and also include a Random Number Generator.

## Prerequisites

1. C++ Compiler: GCC or Clang is required. Version specifics may depend on the particular implementation.
2. SQLite3: For any database requirements, SQLite3 is needed. Make sure it's compatible with your system version.

### Installing Dependencies

#### For macOS

1. For C++ compiler (GCC) and SQLite3, use Homebrew. You can install it with:

```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

2. Then run `brew install gcc sqlite3`.

#### For Windows

1. Install MinGW-w64 from [here](https://mingw-w64.org/doku.php) for GCC.
2. Add the path where you installed MinGW to your System Path.
3. Download precompiled SQLite3 binaries from [here](https://www.sqlite.org/download.html).
4. Add SQLite3 to your System Path.

### Running the project locally

#### Compile and execute the numeric algorithms in the repository

Here's an example of how you can compile and execute the BBPTypeFormula using the `g++` compiler:

1. Compile: `g++ ./cpp/BBPTypeFormula/main.cpp -o bbp`.

2. Execute: `./bbp`.

Follow the same steps to compile and execute the rest of the C++ files in this repository.

### Configuring the working environment

1. Set up the database credentials and any other sensitive information as environment variables.

### CI/CD pipeline setup

If your repository is linked to a CI/CD pipeline, adapt these steps to the requirements of your pipeline. Most CI/CD tools support environment variables which are used for sensitive information like database credentials. 

## Issues

Please raise an issue in the repository for any bugs or issues encountered while using this codebase.
```
