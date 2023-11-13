#include "main.h"
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

