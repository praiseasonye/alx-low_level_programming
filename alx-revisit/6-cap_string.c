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
		(str [i + 1] >= 97 && str[1] <= 122))
			str[i + 1] -= 32;
		else if ((srt[i] == 63 || srt[i] == 59 || srt[i] == 44 
			|| srt[i] == 46 || srt[i] == 40 || srt[i] == 40 ) && str [i + 1] >= 97 && str[1] <= 122)
				str[1 + 1] -=32;

	}
}
