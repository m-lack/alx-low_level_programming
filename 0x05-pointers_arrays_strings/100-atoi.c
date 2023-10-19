#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
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
			int digit = *s - '0';

			// Check for overflow before updating result
			if (result > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			result = result * 10 + digit;
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

