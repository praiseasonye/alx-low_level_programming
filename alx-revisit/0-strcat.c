#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: the variable that holds the destination string
 * @src: the variable that holds the string to be copied
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int index, dest_lent = 0;

	for (index = 0; dest[index] != '\0'; index++)
		dest_lent++;
	for (index = 0; src[index]; index++)
		dest[dest_lent++] = src[index];
	return (dest);
}
