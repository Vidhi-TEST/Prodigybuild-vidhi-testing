```markdown
# Prodigybuild-vidhi-testing

Welcome to Prodigybuild-vidhi-testing repo. This repository contains various C++ implementations of numerical algorithms. The algorithms include - Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation and a Random Number Generator. This repository is a great resource for learning how numerical algorithm are implemented in C++ code. 

## Pre-requisites

1. C++ Compiler: You will need a C++ compiler installed on your machine. It's recommended to use `g++` (Mac/Linux) or `clang` compilers. Make sure it's updated to the most recent stable version.

2. SQLite3: A software library that provides a relational database management system.

3. Make sure to check the version of C++ and SQLite3 required by going through the `package.json` file.

## Installation Guide

### Windows

1. Install GCC for Windows:

	- Go to [MinGW-w64](https://mingw-w64.org/doku.php) and download the installer.
	- Follow the prompts to install.
	- Add the path where you installed MinGW to your system path.

2. Install SQLite3:

	- Download the precompiled binaries [here](https://www.sqlite.org/download.html).
	- Ensure SQLite is added to your system path.

### Mac

1. Use Homebrew to install GCC and SQLite:

	- `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
	- `brew install gcc`
	- `brew install sqlite3`

## Compilation & Execution

After you have correctly installed the prerequisites, you must compile the C++ programs. 

1. Use the C++ compiler (preferably `g++` or `clang`) and the `-o` flag for the output file. For instance, to compile the BBPTypeFormula:

```bash
g++ ./cpp/BBPTypeFormula/main.cpp -o bbp
```

2. To execute the compiled program, use:

```bash
./bbp
```

Follow the same steps for all other C++ files in this repository.

## Environments

This project has been set up with a development and production environment. The development environment is for day-to-day programming and debugging, while the production environment is to simulate a live setting.

## CI/CD Integration & Deployment

If you have a CI/CD pipeline, adapt the installation and execution steps to your pipeline needs. Most CI/CD tools (like Jenkins, CircleCI and TravisCI) support environment variables, so remember to set up any database credentials or other sensitive information as environment variables.

## Issues?

Please raise any issues you find with the repository or if you've any queries. Your feedback and contributions are welcome!
```
