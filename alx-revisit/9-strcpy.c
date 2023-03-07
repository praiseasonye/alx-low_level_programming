#include "main.h"

/**
 *_strcpy - A function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @src: pointer to the variable that holds the string to be copied
 * @dest: the destination variable were the string is to be copied to.
 *
 * Return: the dest variable.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
