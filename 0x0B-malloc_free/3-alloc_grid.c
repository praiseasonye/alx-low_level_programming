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
	int **gridoutput;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	gridoutput = malloc(height * sizeof(int *));
	if (gridoutput == NULL)
	{
		free(gridoutput);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridoutput[i] = malloc(width * sizeof(int));
		if (gridoutput[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(gridoutput[j]);
			free(gridoutput);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridoutput[i][j] = 0;
	return (gridoutput);
}
