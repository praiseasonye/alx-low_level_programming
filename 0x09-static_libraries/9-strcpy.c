#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, and also, by
 * terminating null byte, to a buffer pointed by a @dest.
 * @dest: A buffer I copy to.
 * @src: A source string to cpoy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
