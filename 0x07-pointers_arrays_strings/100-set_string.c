#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A pointer to a pointer to a character.
 * @to: A pointer to a character with the new value.
 *
 * Description: This function sets the value of the pointer 's' to be the same as
 * the value of the pointer 'to', effectively making 's' point to the same memory
 * location as 'to'.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
