#include "main.h"

int prime_finder(int i, int j);

/**
 * is_prime_number - A recursive function that  returns 1
 *                      if the input integer is a prime
 *                      number, otherwise return 0.
 *
 * @n: the number to check if its prime or not
 *
 * Return: 1 or 0 if n is prime or not.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}

/**
 * prime_finder - The actual algorith to determine if
 *                 the number is prime or not.
 *
 * @i: the number
 * @j: the increament
 *
 * Return:  1 or 0 if n is prime or not.
 */


int prime_finder(int i, int j)
{
	if (j > i / 2)
		return (1);
	if (i % j == 0)
		return (0);
	return (prime_finder(i, j + 1));
}
