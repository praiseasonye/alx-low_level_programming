#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number
 *                   to an unsigned int.
 *
 * @b: the sting containing the binary.
 *
 * Return:  the converted number, or 0 if
 *          there is one or more chars in the string b
 *          that is not 0 or 1 b is NULL
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int binary = 1, decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		decimal += (b[i] - '0') * binary;
		binary *= 2;
	}

	return (decimal);
}
