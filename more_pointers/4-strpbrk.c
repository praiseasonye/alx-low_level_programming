#include "main.h"

/**
 * _strpbrk - s function that returns a pointer to the first
 * occurence in the string s of any bytes in the string accept
 * returns null if no match is found.
 *
 * @s: the string to be scanned for a match
 * @accept: the characters the should match the strings in s
 *
 * Return: a char pointer to the first occurence in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
