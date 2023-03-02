#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: variable that holds the the adrss
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;


	for (i = 0; i != '\n'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');

}
