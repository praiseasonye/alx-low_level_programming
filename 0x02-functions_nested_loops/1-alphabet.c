#include "main.h"

/**
 * print_alphabet - prints all the alphabets in lower case
 *
 * Return 0 Always (success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}