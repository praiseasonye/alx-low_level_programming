#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line, to stdout.
 *
 * @str: A pointer that holds the address to the string that would be printed
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
