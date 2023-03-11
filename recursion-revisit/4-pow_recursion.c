#include "main.h"
/**
 * _pow_recursion - A recursive function that returns
 * the value of x raised to the power of y.
 *
 * @x: the variable holding the interger to be raised.
 * @y: the variable holding the power by which x is to be raised.
 *
 * Return: x if y > 0, 1 if y == 0, -1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
