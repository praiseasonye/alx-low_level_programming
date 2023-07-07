#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to
 *                  an unsigned int.
 *
 * @b: a string containing the binary number
 *
 * Return: an unsigned integar of the binary converted to decimal.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, power = 1;
	int i, j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);
	j = i - 1;
	while (j >= 0)
	{
		decimal += ((b[j] - '0') * power);
		power *= 2;
		j--;
	}

	return (decimal);
}
