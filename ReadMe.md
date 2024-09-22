# Mode, Mean, and Median Calculator

This project contains a C++ program that calculates the **mean**, **median**, and **mode** from a series of user-provided numbers. It also includes a shell script to build and run the program, which checks if a C++ compiler is installed and handles any errors encountered during compilation or execution.

## Features

- **Mean**: Calculates the average of the input numbers.
- **Median**: Finds the middle value of the sorted numbers. If the count is even, it calculates the average of the two middle numbers.
- **Mode**: Determines the most frequent number(s) in the list. If there is no mode, it informs the user.
- **Sorting**: The program sorts the input numbers in ascending order before calculating the median and mode.

## Files

- **`main.cpp`**: The C++ source file containing the program.
- **`build_and_run.sh`**: A shell script that compiles and runs the program, checking if a C++ compiler is installed.

## Prerequisites

To run this project, you need:

- A **C++ compiler** such as `g++`, `clang++`, or `c++`.
- A **Linux** or **macOS** terminal, or a **Windows** system with a bash-compatible shell (such as Git Bash).

## How to Use

1. **Download or clone this repository**.

2. **Save your C++ code** in a file named `main.cpp`.

3. **Make the shell script executable**:
   ```bash
   chmod +x build_and_run.sh
