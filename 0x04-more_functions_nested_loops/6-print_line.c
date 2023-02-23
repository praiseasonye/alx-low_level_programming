#include "main.h"

/**
 * print_line - prints a line depending  on any number given
 *
 * @n: the variable thar holds the number of underscores to be printed
 *
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
