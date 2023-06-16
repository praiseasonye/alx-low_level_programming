#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings
 *                  the number of characters it gets from s2
 *                  depends on n.
 * @s1: the first string, the string s2 would be concatenated
 *       to.
 * @s2: the string to concatenate to s1
 * @n: how many characters from s2 would be concatenated to s1
 *
 * Return: a pointer to the new string.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s2_num, s1_num;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s2_num = 0; s2[s2_num] != '\0'; s2_num++)
		;
	for (s1_num = 0; s1[s1_num] != '\0'; s1_num++)
		;
	if (n >= s2_num)
	{
		ptr = malloc((s1_num * sizeof(*s1)) + (s2_num * sizeof(*s2)) - 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (j = 0; s2[j] != '\0'; i++, j++)
			ptr[i] = s2[j];
		ptr[i] = '\0';
	}
	else
	{
		ptr = malloc((s1_num * sizeof(*s1)) + n);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (j = 0; j < n; j++, i++)
			ptr[i] = s2[j];
		ptr[i] = '\0';
	}

	return (ptr);
}
