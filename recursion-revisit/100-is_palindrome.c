#include "main.h"

/**
 * _strlen - A recursive function that
 * returns the length of a string.
 *
 * @s: a pointer to the sting in which the length
 * is to be returned.
 *
 * return: the length of the string.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}



int is_even_odd (char *s)
{
	if (_strlen(s) % 2 == 0)
		return (_strlen(*s) / 2);
	return ((_strlen(s) / 2) + 1); 
