#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *        passed to the command line
 *
 * @argc: the number of arguments passed to  the
 *        command line.
 * @argv: an array of pointers to the strings passed to
 *        the commanmd line as argument.
 *
 * Return: always 0 if program runs successfully.
 */

int main(int argc, char *argv[])
{
	int result = 0, i = 1, j = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
