#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 *
 *@c: variable that holds the character to be checked
 *
 * Return: 1 if character is an upperecase alphabet, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(c);
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(' ');
		return (0);
	}
	_putchar('\n');
}
