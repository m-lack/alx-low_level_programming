#include "main.h"

/**
 * count_arguments - counts the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Number of arguments
 */
int count_arguments(int argc, char *argv[])
{
    (void)argv; /* Suppress unused parameter warning */
    return argc - 1;
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
    int num_args;

    num_args = count_arguments(argc, argv);

    _putchar(num_args + '0');
    _putchar('\n');

    return (0);
}

