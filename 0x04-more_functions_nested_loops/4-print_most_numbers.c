#include "main.h"
/**
 * print_most_numbers - print numbers from 0-9 except 2 and 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 4 || i == 2)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
