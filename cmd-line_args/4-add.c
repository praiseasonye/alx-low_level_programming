#include "main.h"
#include <stdio.h>
#include <stdlib.h>

 /**
 * main - a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print
 * 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of
 * all the numbers can be stored in an int.
 *
 * @argc: the number of arguments passed to the command
 * line
 *
 * @argv: a pointer to ans array of pointers to the arguments
 * passed to the command line.
 *
 * Return: 1 if the arguments if argument passed to the
 * command line are not integars, return 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int count2 = 0;
	int sum = 0;	

	if (argc < 2)
		printf("%d\n", 0);
	for (count = 1; count < argc; count++)
	{
		for (count2 = 0; *(*(argv + count) + count2) != '\0'; count2++)
		{
			if (*(*(argv + count) + count2) < 48 || *(*(argv + count) + count2) > 57)
			{	
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
