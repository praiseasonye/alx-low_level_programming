#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the nwly concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	char *j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (k = 0; s2[k] != '\0'; k++)
		;

	j = malloc(sizeof((i + k) - 1));
	if (j == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		j[i] = s1[i];
	for (k = 0; s2[k]; k++)
		j[i + k] = s2[k];

	return (j);

}
