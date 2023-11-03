**Task 0: Creating `libmy.a` Static Library**
- Objective: Create a static library containing various C functions and push a `main.h` file with function prototypes.
- Functions Included: 20 functions, including string manipulation, character checking, and more.
- Usage: Compile a program (`main.c`) that uses the `_puts` function from the library to display a quote.

**Task 1: Creating `liball.a` Static Library**
- Objective: Create a shell script, `create_static_lib.sh`, to generate a static library, `liball.a`, from all `.c` files in the current directory.
- Steps: The script collects and compiles all `.c` files into a single static library, `liball.a`.
