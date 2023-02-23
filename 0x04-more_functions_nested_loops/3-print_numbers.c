#include "main.h"

/**
 * print_numbers - This function prints numbers from Zero to nine
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
