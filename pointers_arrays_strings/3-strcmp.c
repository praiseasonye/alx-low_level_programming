#include "main.h"
/**
 * _strcmp - A function that compares two strings
 *
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 *
 * Return: 0 if s1 snd a2 are equal
 * negative integar if s1 is lesser than s2
 * positive integar if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; s1++, s2++)
	{

	}
	return (*s1 - *s2);
}
