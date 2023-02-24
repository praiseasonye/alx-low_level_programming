#include "main.h"

/**
 * print_square - this function prints square, the size of a given integar
 *
 * @size: the variablr that holds the size of squre t6o be printed
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
}
