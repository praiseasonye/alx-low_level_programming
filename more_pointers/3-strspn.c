#include "main.h"

/**
 * _strspn - a function that searchess for the occurence of
 * a string (accept) in another string (s). it searches for
 * a character of accept in s until it can no longer find it
 * consecutively.
 *
 * @s: a pointer to the string to search for the similarity in
 * accept.
 * @accept: the string to search for in s
 *
 * Return: an integar of the amount of the accept found in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, accept_byte = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				accept_byte++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (accept_byte);
}

