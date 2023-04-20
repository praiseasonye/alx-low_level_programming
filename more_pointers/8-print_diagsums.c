#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a funcyion that prints the sum of two diagonals
 *                  of a square matrix of integars.
 *
 * @a: a pointer to the first element of the two dimensional
 *     array after being casted from an int[][] nto an int*.
 *
 * @size: the amount of elements in both the inner and the outer
 *        2D array.
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	/* algorithm for the first diagonal summation */
	int i, j;
	unsigned int sum = 0, sum1 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		sum = sum + a[i];
	}

	/* algorithm for the second diagonal summation */

	for (j = 0; j < (size * size) - (size - 1); j = j + (size - 1))
	{
		sum1 = sum1 + a[j];
	}
	printf("%d, %d", sum, sum1);
	putchar('\n');
}
