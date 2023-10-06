#include <stdio.h>

int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar(digit + 48); // Convert digit to ASCII and print
        digit++;
    }

    putchar('\n');

    return (0);
}

