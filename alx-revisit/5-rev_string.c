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
	char temp;

	for (i = 0; *(s + i) != '\0'; i++)
		j = i;
	for (m = 0; *(s + m) != '\0'; m++)
	{
		for (k = j; k >= 0; k--)
		{
			temp = *(s + m)
			*(s + m) = *(s + k);
			*(s + j) = temp;
		}
	}
}

