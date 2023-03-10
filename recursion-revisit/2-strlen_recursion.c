#include "main.h"

/**
 * _strlen_recursion - A recursive function that
 * returns the length of a string.
 *
 * @s: a pointer to the sting in which the length
 * is to be returned.
 *
 * return: the length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
