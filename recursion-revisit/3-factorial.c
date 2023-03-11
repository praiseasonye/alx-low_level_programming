#include "main.h"

/**
 * factorial - A Recursive function that
 * returns the factorial of a given number.
 *
 * @n: the variable containing the number
 * in which the factorial is needed.
 *
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
