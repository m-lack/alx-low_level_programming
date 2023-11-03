#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in a string of any character in a set
 * @s: The string to search in
 * @accept: The string containing characters to search for
 *
 * Return: A pointer to the first occurrence of a character from accept in s, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
    int k;

    while (*s)
    {
        for (k = 0; accept[k]; k++)
        {
            if (*s == accept[k])
                return (s);
        }
        s++;
    }

    return ('\0');
}

