# include "main.h"
/**
 * _atoi - Write a function that convert a string to an integer.
 *
 * @s: the variable that holds the string to be converted to integar
 *
 * Return: converted integar from the string given.
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;
	unsigned int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			number = (number * 10) + (s[i] - '0');
		else if (number > 0)
			break;
	}
	return (number * sign);
}
