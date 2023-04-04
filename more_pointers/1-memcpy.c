#include "main.h"

/**
 * _memcpy - a function that copies n bytes from
 * memory area src to memory arear dest and
 * returns a pointer to dest
 * @dest: a pointer to the destination of the copied
 * string
 * @src: a pointer to the string to be copied to dest
 * @n: the number of bytes to be copied
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
