```markdown
# Prodigybuild-vidhi-testing

This repository contains various C++ implementations of numerical algorithms and database interactions. We utilize libs like SQLite3 and GCC with various numerical algorithms such as Automatic Differentiation, BBP Type Formula, Brent Salamin Formula, Discrete Fourier Transform, Fixed Point Iteration, Lagrange Interpolation, and a Random Number Generator. 

## Pre-requisites

1. C++ Compiler: You will need a C++ compiler installed on your machine. Instructions for installation are provided below.

2. SQLite3: This is required for any database interactions.

## Setup and Installation

### Mac

#### GCC Compiler

1. Open Terminal

2. Enter the following commands one by one:
   
   ```bash
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
    brew install gcc
   ```

#### SQLite3

1. Open Terminal

2. Enter the following commands one by one:

   ```bash
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
    brew install sqlite3
   ```

### Windows

#### GCC Compiler

1. Go to [MinGW-w64](https://mingw-w64.org/doku.php) and download the installer.

2. Follow the prompts to install MinGW.

3. After installation, add the bin directory of MinGW to your system environment 'Path' variable.

#### SQLite3

1. Download the precompiled binaries for SQLite3 from [here](https://www.sqlite.org/download.html).

2. After downloading, add the directory containing the SQLite3 executable to your system environment 'Path' variable.

## How to Run Locally

After setting up the required software, navigate to the root directory of the project in Terminal (Mac) or Command Prompt (Windows).

To compile a C++ source file, use the command:

```bash
 g++ PATH/TO/SOURCE/FILE -o desired_name_of_executable
```

To run the compiled file, use the command:

```bash
./desired_name_of_executable
```

The same process can be used for all C++ programs in the repository.

## Setting Up CI/CD

If your project has a CI/CD pipeline, replicate the above steps in your build environment. Keep the database credentials and other sensitive info in the environment variables for security.

## Contact

If any issues arise or for any feedback, please raise an issue in the repository. Your support is much appreciated!
```
