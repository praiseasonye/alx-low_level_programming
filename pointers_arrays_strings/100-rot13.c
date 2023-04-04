#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @str: the string to be encoded in ROT-13.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	int i, j;

	char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L',
			'M', 'N', 'O', 'P', 'Q', 'R',
			'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'a', 'b', 'c', 'd',
			'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z', '\0'};

	char rot13[] = {'N', 'O', 'P', 'Q', 'R', 'S',
			'T', 'U', 'V', 'W', 'X', 'Y',
			'Z', 'A', 'B', 'C', 'D', 'E',
			'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'n', 'o', 'p', 'q',
			'r', 's', 't', 'u', 'v', 'w',
			'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', '\0'};


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
