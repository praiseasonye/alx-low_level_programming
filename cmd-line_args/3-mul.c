#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * the program prints the result of the multiplication,
 * followed by a new line.
 * the two numbers and result of the multiplication
 * can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error,
 * followed by a new line, and return 1
 *
 * @argc: the counter representing the number of arguments passed
 * to the command line.
 *
 * @argv: the pointer to an array of pointers to the arguments passed
 * to the command line.
 *
 * Return: 1 if there are not up to three argument passed to the
 * command line and 0 if its up to three.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%d\n", i * j);
		return (0);
	}
}
