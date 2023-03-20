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
	int str1_len = 0;
	int str2_len = 1;

	for (i = 0; s1[i] != '\0'; i++)
		str1_len += 1;

	for (i = 0; s2[i] != '\0'; i++)
		str2_len += 1;

	j = malloc(sizeof(char) * (str1_len + str2_len));
	if (j == NULL)
		return (NULL);
	for (i = 0; i < str1_len; i++)
		j[i] = s1[i];
	while (s2[k] != '\0')
	{
		j[i] = s2[k];
		k++;
	}
	return (j);



}
