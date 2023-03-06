#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * expect that it will use thye most n bit from src
 *
 * @dest: the pointer to the variable that holds the
 * destination string.
 *
 * @src: the pointer to the variable that holds the string
 * to be copied.
 *
 * @n: the number of strings to be copied from src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{

	}
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i++] = src[j];
	return (dest);
}
