#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: A pointer to the allocated and initialized memory.
 *         Returns NULL if nmemb or size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

/* Initialize the allocated memory to zero using memset */
memset(ptr, 0, total_size);

return (ptr);
}
