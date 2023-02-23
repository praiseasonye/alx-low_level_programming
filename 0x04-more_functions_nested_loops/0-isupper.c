#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 *
 *@c: variable that holds the character to be checked
 * Return: 1 if character is uppercase 0 if character is lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
