#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to a null-terminated string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	s -= len;

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}

	_putchar('\n');
}

