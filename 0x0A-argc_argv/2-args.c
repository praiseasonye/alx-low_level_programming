#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints att the argument it receives
 *
 * @argc: the total number argument passed to the function
 * @argv: an array of pointers to the strings passed to the 
 *        command line as argument.
 *
 * Return: always 0 if function runs successfully.
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
