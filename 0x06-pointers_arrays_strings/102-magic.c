#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that performs some magic. It assigns
 * a value to a[2] indirectly through a pointer p and then prints a[2].
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
