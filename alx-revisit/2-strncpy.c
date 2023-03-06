#include "main.h"
/**
 * _strncpy - a function that copies a string.
 *
 * @dest: the pointer to the variable that holds the
 * destination of the copied string.
 *
 * @src: the pointer to the variable that holds the
 * sting to be copied
 *
 * @n: the number of strings to be copied from src
 *
 * Return: A pointer to the resulting sring dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
