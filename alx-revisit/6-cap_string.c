#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * based on the following separtors: ,, ;, ., !, ?, \", (, ), {, and }
 *
 * @str: the pointer that holds the address of the string to be capitalized
 *
 * Return: a pointer that holds the address of the changed string.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 32 && str[i] <= 34) &&
		(str[i + 1] >= 97 && str[i + 1] <= 122))
			str[i + 1] -= 32;
		else if ((str[i] == 63 || str[i] == 59 || str[i] == 44
			|| str[i] == 46 || str[i] == 40 || str[i] == 40
			|| str[i] == 41 || str[i] == 123 || str[i] == 125
			|| str[i] == 9) && str[i + 1] >= 97 && str[i + 1] <= 122)
			str[i + 1] -= 32;
		else if (str[i] == '\n' && str[i + 1] != '\0')
			str[i + 1] -= 32;
	}
	return (str);
}
