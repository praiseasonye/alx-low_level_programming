#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given
 *                  as a parameter on each element of an array.
 *
 * @array: the array to iterate
 * @size: the size of the array
 * @action: a pointer to code of the function that
 *          should take a particular action on the
 *          array.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
