#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters.
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
    if (size <= 0) {
        _putchar('\n');
        return;
    }

    int row, col, space;

    for (row = 1; row <= size; row++) {
        // Print spaces
        for (space = size - row; space > 0; space--) {
            _putchar(' ');
        }

        // Print '#' characters
        for (col = 1; col <= row; col++) {
            _putchar('#');
        }

        // Print newline after each row
        _putchar('\n');
    }
}
