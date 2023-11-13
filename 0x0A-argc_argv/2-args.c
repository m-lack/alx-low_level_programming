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

