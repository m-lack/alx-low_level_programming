#include "main.h"

/**
 * print_args - prints all arguments it receives
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 */
void print_args(int argc, char *argv[])
{
    int i; // Move the declaration outside the loop
    for (i = 0; i < argc; i++)
    {
        _puts(argv[i]);
    }
}

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    print_args(argc, argv);
    return 0;
}

