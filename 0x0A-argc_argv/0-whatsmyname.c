#include "main.h"
#include <unistd.h> /* Include the header file for write function */
#include <stdio.h>

/**
 * print_program_name - prints the name of the program
 * @name: the name of the program
 */
void print_program_name(char *name)
{
	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
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
	(void)argc;

	print_program_name(argv[0]);

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
