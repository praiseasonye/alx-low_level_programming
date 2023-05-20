#include "variadic_functions.h"

/**
 * sum_them_all - a variadic functions that returns the
 *                sum of all its parameters
 * @n: the number of parameters the user wishes to add up.
 *
 * Return: the sum of all the variadic parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;


	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	va_end(numbers);

	return (sum);
}
