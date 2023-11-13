#include "main.h"

/**
 * print_args - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: None
 */
void print_args(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        _puts(argv[i]);
        _putchar('\n');
    }
}

/**
 * _puts - prints a string followed by a new line
 * @str: the string to print
 *
 * Return: None
 */
void _puts(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: the character to print
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    print_args(argc, argv);

    return (0);
}

