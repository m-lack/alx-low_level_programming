#include "main.h"
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 *
 * A palindrome is a word, phrase, number, or other sequence of characters
 * that reads the same forward and backward (ignoring spaces, punctuation,
 * and capitalization).
 *
 * @s: The string to check for palindrome status.
 *
 * Return: 1 if 's' is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
    int length = strlen(s);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        while (i < j && !isalnum(s[i])) {
            i++;
        }
        while (i < j && !isalnum(s[j])) {
            j--;
        }

        if (tolower(s[i]) != tolower(s[j])) {
            return 0;  // Not a palindrome
        }
    }

    return 1;  // It's a palindrome
}
