#include <stdio.h>
#include <stdlib.h>

/**
 * main - a  program that prints the number
 *        of arguments passed into it.
 *
 * @argc: the number of arguments passed to main
 * @argv: an array of pointers to the strings passed
 *        to main as command line arguments.
 *
 * Return: return 0 if program runs successfully.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
