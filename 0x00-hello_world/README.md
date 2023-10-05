#!/bin/bash

1. **Script to Run C File Through Preprocessor (`0-preprocessor`)**:
   - This script is designed to run a C file through the preprocessor and save the result into another file.
   - It takes the C file name from the `$CFILE` environment variable.
   - The script uses the `gcc` compiler with the `-E` option, which tells it to run the preprocessor only.
   - The output is saved to a file named `c` by default.
   - Example usage: `export CFILE=main.c` and then `./0-preprocessor`.

2. **Script to Compile C File Without Linking (`1-compiler`)**:
   - This script compiles a C file but does not link it.
   - It also takes the C file name from the `$CFILE` environment variable.
   - The script uses the `gcc` compiler with the `-c` option, which generates an object file.
   - The output object file is named the same as the input C file but with the ".o" extension.
   - Example usage: `export CFILE=main.c` and then `./1-compiler`.

3. **Script to Generate Assembly Code from C File (`2-assembler`)**:
   - This script generates the assembly code of a C file and saves it in an output file.
   - It uses the `gcc` compiler with the `-S` option to generate the assembly code.
   - The output assembly file is named the same as the input C file but with the ".s" extension.
   - Example usage: `export CFILE=main.c` and then `./2-assembler`.

4. **Script to Compile C File and Create Executable (`3-name`)**:
   - This script compiles a C file and creates an executable named "cisfun."
   - It also takes the C file name from the `$CFILE` environment variable.
   - The script uses the `gcc` compiler to compile the C file and produce an executable named "cisfun."
   - Example usage: `export CFILE=main.c` and then `./3-name`.

5. **C Program to Print a String with Proper Grammar (`4-puts.c`)**:
   - This C program prints the specified string using the `puts` function.
   - It uses `puts` to print the string and returns `0` at the end of the program.
   - The program complies with the requirements to use `puts` and return `0`.

6. **C Program to Print Sizes of Various Data Types (`6-size.c`)**:
   - This C program prints the sizes of various data types using the `sizeof` operator.
   - It prints the sizes of `char`, `int`, `long int`, `long long int`, and `float`.
   - The program is compiled with different options (`-m32` and `-m64`) to show the sizes for 32-bit and 64-bit systems.

7. **Script to Generate Intel Syntax Assembly Code from C File (`100-intel`)**:
   - This script generates Intel syntax assembly code from a C file and saves it in an output file.
   - It takes the C file name from the `$CFILE` environment variable.
   - The script uses the `gcc` compiler with the `-S` option and `-masm=intel` to generate Intel syntax assembly code.
   - The output assembly file is named the same as the input C file but with the ".s" extension.
   - Example usage: `export CFILE=main.c` and then `./100-intel`.

8. **C Program to Print a Quote to Standard Error (`101-quote.c`)**:
   - This C program prints a specific string to the standard error stream using the `write` function.
   - It does not use `printf` or `puts`.
   - The program returns `1` to indicate an error, as required.
   - Example usage: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c` and then `./quote`.


