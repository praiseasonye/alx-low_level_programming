#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of
 * integers.
 *
 * @a: the pointer that holds the address of the array to be reversed.
 * @n: the number of elements in the array.
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int temp, index = 0;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}
}
