#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: the character that would separate the printed numbers.
 * @n: the number of optional arguments passed to the function.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(numbers, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(numbers, int));
	}
	va_end(numbers);
	putchar('\n');
}
