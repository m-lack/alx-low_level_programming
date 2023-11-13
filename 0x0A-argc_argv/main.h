#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>

int _putchar(char c);
void _puts(char *str);
void print_args(int argc, char *argv[]);
ssize_t write(int fildes, const void *buf, size_t nbyte);

#endif /* MAIN_H */

