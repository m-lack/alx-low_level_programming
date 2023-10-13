#include "main.h"

/**
 * _putchar - custom putchar function (declare or define it as needed)
 * @c: the character to print
 */
int _putchar(char c);

/**
 * print_numbers - prints numbers 0-9 followed by a new line
 */
void print_numbers(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
}

