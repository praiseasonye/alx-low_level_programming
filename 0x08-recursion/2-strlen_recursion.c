#include "main.h"

/**
 * _strlen_recursion - A recursive function that returns the
 *                     length of a string.
 *
 * @s: a pointer to the string to which we're finding th length.
 *
 * Return: the length of the string s is pointing to
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
