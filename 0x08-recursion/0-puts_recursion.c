#include "main.h"

/**
 * _puts_recursion - a fu8nction that prints a string followed
 *                   new line.
 *
 * @s: the string to be printed using the recursive function.
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	i++;
	_puts_recursion(s + i);
}
