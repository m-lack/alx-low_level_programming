#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a null-terminated string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

