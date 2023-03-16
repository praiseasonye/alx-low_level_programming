#include "main.h"
#include <stdio.h>

/**
 * main - the body of the program that prints the first argument
 * in the command line is the path to the program name.
 *
 * @argc: this argument is the number of number of arguments
 * passed to the command line.
 *
 * @argv: a pointer to the array of arguments passed to the command
 * line.
 *
 * Return: always 0 (success)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
