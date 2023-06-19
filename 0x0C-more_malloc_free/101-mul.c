#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * main - A program that multiplies two positive numbers
 *        from the command line
 *
 * @argc: the number of arguments passed to the command line
 * @argv: an array of pointers to the strings (argument) passed
 *        to the command line.
 *
 * Return: 0 if successful/
 */

int main(int argc, char *argv[])
{
	char *arg1;
	char *arg2;
	int i, len1, len2, len, carry, digit1, digit2, *result, mul_checker = 0;

	arg1 = argv[1];
	arg2 = argv[3];
	if (argc != 3 || arg1 == NULL || arg2 == NULL)
	{
		errors();
	}

	len1 = _strlen(arg1);
	len2 = _strlen(arg2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 > 0; len1--)
	{
		digit1 = arg1[len1] - '0';
		carry = 0;
		for (len2 = len2 - 1 ; len >= 0; len2--)
		{
			digit2 = arg2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for(i = 0; i < len - 1; i++)
	{
		if (result[i])
			mul_checker = 1;
		if (mul_checker)
			_putchar(result[i] + '0');
	}
	if (!mul_checker)
		_putchar('\n');
	free(result);
	return (0);


}
