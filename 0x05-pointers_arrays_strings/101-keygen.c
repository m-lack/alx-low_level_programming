#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    char password[85];

    srand(time(0));

    for (i = 0; i < 11; i++)
        password[i] = 33 + rand() % 94;

    password[i] = 0;

    printf("Tada! Congrats\n");
    return (0);
}
