#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function the makes use of command line
 *        arguments to print the name of the program
 *
 * @argc: the number of arguments passed to the command
 *        line.
 * @argv: an array of pointers to the arguments passed
 *        to the command line.
 *
 * Return: always 0 on successful run.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
