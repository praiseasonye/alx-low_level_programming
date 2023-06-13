#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int get_cent(int money);

/**
 * main - Write a program that prints the minimum number
 *        of coins to make change for an amount of money.
 *        The money is given as an argument to the command
 *        line.
 *
 * @argv: the number of arguments passed to the command line
 * @argv: an array of pointers to the arguments in form of strings
 *        passed to the command line.
 *
 * Return: always 0 if program runs successfully
 */


int main(int argc, char *argv[])
{
	int cents, numCoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		numCoins += 1;
	}
	printf("%d\n", numCoins);
	return (0);
}
