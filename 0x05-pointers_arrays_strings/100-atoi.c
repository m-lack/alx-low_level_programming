#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int sign = 1;  /* Initialize the sign to positive */
    int result = 0;

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1;  /* Toggle the sign */
        }
        else if (*s >= '0' && *s <= '9')
        {
            result = result * 10 + (*s - '0');
        }
        else if (result > 0)
        {
            /* If non-digit character after digits, break the loop */
            break;
        }
        s++;
    }

    return result * sign;
}

