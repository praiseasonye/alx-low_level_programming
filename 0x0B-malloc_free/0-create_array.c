#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that alloctes memory
 * and creates an array of characters.
 *
 * @size: the number of elements in th array
 * @c: the array name.
 *
 * Return: the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *malloc_ptr;

	malloc_ptr = malloc(sizeof(char) * size);
	if (malloc_ptr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		malloc_ptr[i] = c;
	return (malloc_ptr);

}
