#include "variadic_functions.h"

/**
 * print_strings - a function that prints numbers, followed by a new line.
 *
 * @separator: the characters that would separate the printed strings.
 * @n: the number of optional arguments passed to the function.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
		{
			printf("(nil)");
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("%s", str);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(strings);
	putchar('\n');
}
