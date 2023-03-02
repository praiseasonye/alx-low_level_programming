#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * @n: variable that holds the number to be printed from.
 *
 * Return: the value of n.
 */

void print_to_98(int n)
{
	int i, j;

	j = n - 1;
	_putchar(n + '0');
	for (i = j; i < 99; i++)
	{
		if (n >= 0 && n < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i + '0');
		}
		else if (n > 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i / 10);
			_putchar(i % 10);
		}
		else if (n < 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i / 10 + '0');
			_putchar((i % 10) - 10 + '0');
		}
	}
	_putchar('\n');
}
