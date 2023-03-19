#include "main.h"
#include <stdlib>

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
	int i;
	char *j

	if (size == 0)
		return (NULL);
	j = malloc(sizeof(char) * size)
		if (j == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
		j[i] = c;
	return(j);
}

