#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the
 *             arguments of your program.
 *
 * @ac the number of arguments passed to the command line
 * @av: pointer to the strings passed to the command line
 *
 * Return: a new string containing all the arguments of the progtram
 *
 */

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int argc, char **argv)
{
	char *result;
	int c, i, j, ia;

	if (argc == 0)
		return (NULL);
	for (c = i = 0; i < argc; i++)
	{
		if (argv[i] == NULL)
			return (NULL);
		for (j = 0; argv[i][j] != '\0'; j++)
			c++;
		c++;
	}
	result = malloc((c + 1) * sizeof(char));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (argv[i][j] == '\0')
		{
			result[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			result[ia] = argv[i][j];
	}
	result[ia] = '\0';
	return (result);
}
