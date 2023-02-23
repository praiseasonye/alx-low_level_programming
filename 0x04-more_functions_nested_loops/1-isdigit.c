#include "main.h"

/**
 * _isdigit - checks if a variable is a digit or otherwise
 *
 * @c: the variable that holds input to be checked
 *
 * Return: 1 if it's a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
