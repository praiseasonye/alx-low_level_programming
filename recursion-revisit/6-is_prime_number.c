#include "main.h"

int prime_function(int n, int i);

/**
 * is_prime_number - A Recursive function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 * @n: the variable to determine if its prime or not
 *
 * Return: whatever the function prime_function returns.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_function(n, 2));
}

/**
 * prime_function - A Recursive function that checks if a digit
 * is prime number or not
 *
 * @n: the variable to be determined if its prime or not
 * @i: iterator
 *
 * Return: 1 if number is prime, 0 if number is not prime.
 */

int prime_function(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i == 0 && n == i)
		return (1);
	return (prime_function(n, i + 1));
}
