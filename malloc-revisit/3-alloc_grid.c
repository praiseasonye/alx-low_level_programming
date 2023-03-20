#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: the inner array of the 2d array
 * @height: the outer array of the 2d array
 *
 * Return: A ponter to the 2d array.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **j;
	int k;

	if (width == 0 || height == 0)
		return (NULL);
	j = malloc(sizeof(int) * (width + height));
	if (j == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			j[i][k] = 0;
	}
	return (0);
}
