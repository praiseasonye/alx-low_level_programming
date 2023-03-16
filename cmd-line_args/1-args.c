#include "main.h"
#include <stdio.h>

/**
 * main - the body of a prtogram that prints out the
 * number of arguments giving to the command line
 *
 * @argc: the counter (number of arguments passed to the
 * command line)
 *
 * @argv: the pointer to the arrays of the command line argument
 *
 * Return: Always 0 (success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
