#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * @s: the pointer that stores the address of the variable to be reversed.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i, j, k, m;

	for (i = 0; *(s + i) != '\0'; i++)
		j = i;
	for (m = 0; *(s + m) != '\n'; m++)
	{
		for (k = j; k >= 0; k--)
			*(s + m) = *(s + k);
	}
}

