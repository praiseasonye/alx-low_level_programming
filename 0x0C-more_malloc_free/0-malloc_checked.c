#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the amount of memory blocks to be assigned
 * Return: a void pointer to the allocated memory if successful
 *         or terminate with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
