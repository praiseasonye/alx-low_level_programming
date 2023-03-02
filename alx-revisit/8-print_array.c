#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: the pointer that holds the location to the array
 * @n: the number of elements in the array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;


	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d", *(a + (n - 1)));
	putchar('\n');
}
