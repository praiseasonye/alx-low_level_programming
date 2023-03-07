#include "main.h"

/**
 * string_toupper - A function that changes all lowercase
 * letters of a string to uppercase.
 *
 * @str: the pointer that holds the address of the string to be changed.
 *
 * Return: a pointer that holds the address of the changed string.
 */

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
