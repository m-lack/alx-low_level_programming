#include <stdio.h>

int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar(digit + '0'); 

        if (digit < 9)
        {
            putchar(',');
            putchar(' ');
        }

        digit++;
    }

    putchar('\n');

    return (0);
}

