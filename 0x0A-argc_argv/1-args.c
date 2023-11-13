#include "main.h"

/**
 * count_arguments - counts the number of arguments
 * @argc: argument count
 *
 * Return: Number of arguments
 */
int count_arguments(int argc)
{
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

	num_args = count_arguments(argc);

	_putchar(num_args + '0');
	_putchar('\n');

	return (0);
}

/**
 * _putchar - writes a character to the standard output
 * @c: the character to print
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

