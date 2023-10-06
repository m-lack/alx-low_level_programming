#include <stdio.h>

int main(void)
{
    int digit1, digit2;

    digit1 = 0;
    while (digit1 <= 8)
    {
        digit2 = digit1 + 1;
        while (digit2 <= 9)
        {
            putchar(digit1 + '0'); // Convert digits to ASCII and print
            putchar(digit2 + '0');
            
            if (digit1 != 8 || digit2 != 9)
            {
                putchar(',');
                putchar(' ');
            }

            digit2++;
        }
        digit1++;
    }

    putchar('\n');

    return (0);
}

