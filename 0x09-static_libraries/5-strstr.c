#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: A pointer to the first occurrence of the substring in the string, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
    for (; *haystack != '\0'; haystack++)
    {
        char *l = haystack;
        char *p = needle;

        while (*l == *p && *p != '\0')
        {
            l++;
            p++;
        }

        if (*p == '\0')
            return (haystack);
    }

    return (0);
}

