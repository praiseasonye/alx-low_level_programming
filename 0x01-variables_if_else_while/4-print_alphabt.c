#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
			continue;
		else if (i == 'q')
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
