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
	int str_size = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str_size += 1;
		i++;
	}

	j = malloc(sizeof(char) * (str_size + 1));
	if (j == NULL)
		return (NULL);
	for (i = 0; i < str_size; i++)
		j[i] = str[i];
	return (j);
}
