#include "main.h"

/**
 * print_last_digit - prints the last digit of every number
 *
 * @c: the variable that stores the number to be checked
 *
 * Return: returns i
 */

int print_last_digit(int c)
{
	int i;

	i = c % 10;
	if (c < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
