#include "main.h"

/**
 * _strchr - a function that returns a pointer to
 * to remaining characters starting from the indicted charcter
 *
 * @s: the string to search for and locate the character
 * @c: the character to search for in the string s
 *
 * Return: a pointer to the string starting with the letter of
 * choice stored in the variable c
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *new_s;

	while (*s++)
	{
		if (*(s + i) == c)
		{
			new_s = s;
			break;
		}
		i++;
	}
	return (new_s);
}
