#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: always 0 success
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
