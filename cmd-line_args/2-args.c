#include "main.h"
#include <stdio.h>

/**
 * main - a rite a program that prints all arguments it receives.
 * it prints Only print one argument per line,
 * ending with a new line.
 *
 * @argc: counter to the amount of arguments
 * passed to the command lin.
 *
 * @argv: pointer to the arrays of arguments
 * passed to the command line.
 *
 * Return: Alway 0 (success)
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
