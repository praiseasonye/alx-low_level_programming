#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n: variable that holds the integer
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
