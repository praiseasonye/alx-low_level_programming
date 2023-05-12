#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - a function that searches and returns the index
 *             of the first number in the array that passes the
 *             camparison test.
 *
 * @array: array of integars that will go through the comparison test
 * @size: the size of the array.
 * @cmp: the function that compares the integars in @array.
 *
 * Return: the index of the integar in the array that passes the test,
 *         -1 if no element passes the test,
 *         -1 if size is equal to or less than 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]) == 1)
			return (i);
	if (i == size)
		return (-1);
	return (i);
}
