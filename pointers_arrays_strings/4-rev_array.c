#include "main.h"

/**
 * reverse_array - A function that reverses
 * the content of an array of integers.
 *
 * @a: The pointer to the array of integars
 * @n: the number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tempo;

	for (i = 0; i < n / 2; i++, n--)
	{
		tempo = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tempo;
	}
}
