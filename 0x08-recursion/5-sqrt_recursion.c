#include "main.h"
int sqrt_finder(int a, int b);
/**
 * _sqrt_recursion - A recursive function that returns the
 *                   square root of a number.
 * @n: the number in which the square root is to be returned.
 *
 * Return: the square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_finder(n, 0));
}

/**
 * sqrt_finder - the actual algorithm that finds the square
 *               root.
 *
 * @a: potential squre root
 * @b: increament
 *
 * Return: b if its the square root of a
 */

int sqrt_finder(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (sqrt_finder(a, b + 1));
}
