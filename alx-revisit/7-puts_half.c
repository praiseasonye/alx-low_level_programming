#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line.
 *
 * @str: pointer to the varible that holds the string to be ptinted
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, j;


	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i / 2 == 0)
	{
		for (j = (i / 2) + 1; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (i - 1) / 2 + 1; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
