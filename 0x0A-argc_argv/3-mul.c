#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers passed
 *        from the command line.
 *
 * @argc: the number of arguments passed to the command
 *        line.
 * @argv: an array of pointers to the strings passed as
 *        arguments to the command line.
 *
 * Return: always 0 if program runs successfully.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

