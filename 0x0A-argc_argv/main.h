#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>  /* Include this line for size_t and ssize_t */

int _putchar(char c);
void print_program_name(char *name);
int count_arguments(int argc, char *argv[]);
void _puts(char *str);

/* Add the following declaration for write function */
ssize_t write(int fildes, const void *buf, size_t nbyte);

#endif /* MAIN_H */

