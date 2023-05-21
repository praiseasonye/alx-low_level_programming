#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: the string to specify the kind of format to print
 * 
 * Return: void
 */

void print_all(const char * const format, ...)
{

	fd_t form_spec[] = {
		{'c', CHARACTER},
		{'i', INTEGAR},
		{'f', FLOAT},
		{'s', STRING}
	}
	int i = 0;
	va_list input;

	va_start(input, format);
	while (format != '\0')
		if (format[i] == form_spec[i].specifier && form_spec.specifier != NULL)
		{

}
