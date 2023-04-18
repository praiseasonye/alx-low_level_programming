#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: the string to be duplicated.
 *
 * Return: a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *j;
	int k;

	if (str == NULL)
		return (NULL);
	j = malloc(sizeof(str));
	if (j == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
	{
		j[k] = str[k];
	}
	return (j);
}
