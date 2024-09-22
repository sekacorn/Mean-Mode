#!/bin/bash

# Script to compile and run the C++ program, checking if a C++ compiler is available.

# Name of the C++ source file
SOURCE_FILE="main.cpp"

# Name of the output executable
OUTPUT_FILE="mode_median_mean"

# Function to print an error message and exit the script
function error_exit {
    echo "[ERROR] $1" 1>&2
    exit 1
}

# Check if a C++ compiler is installed (checks for g++, clang++, or c++)
COMPILER=""
if command -v g++ &> /dev/null; then
    COMPILER="g++"
elif command -v clang++ &> /dev/null; then
    COMPILER="clang++"
elif command -v c++ &> /dev/null; then
    COMPILER="c++"
else
    error_exit "No C++ compiler found (g++, clang++, or c++). Please install a C++ compiler and try again."
fi

# Check if the source file exists
if [ ! -f "$SOURCE_FILE" ]; then
    error_exit "Source file $SOURCE_FILE not found."
fi

# Compile the C++ program
echo "[INFO] Compiling the program using $COMPILER..."
$COMPILER "$SOURCE_FILE" -o "$OUTPUT_FILE"

# Check if the compilation was successful
if [ $? -ne 0 ]; then
    error_exit "Compilation failed."
fi

# Run the executable
echo "[INFO] Running the program..."
./"$OUTPUT_FILE"

# If the program ran successfully
if [ $? -eq 0 ]; then
    echo "[INFO] Program finished successfully."
else
    error_exit "Program encountered an error during execution."
fi
