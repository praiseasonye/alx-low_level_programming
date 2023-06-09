#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: variable that holds the chaacter we're checking for
 *
 * Return: 1 is it's an alphabet, 0 if its not an alphabet
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
