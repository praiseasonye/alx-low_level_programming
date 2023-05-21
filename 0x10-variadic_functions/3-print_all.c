#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: the string to specify the kind of format to print
 * 
 * Return: void
 */

void print_all(const char * const format, ...)
{

	fs_t specifier[] = {
		{'c'},
		{'i'},
		{'f'},
		{'s'}
	}
	
	fd_t data_type[] = {
		{(char)va_arg(input, int)},
		{va_arg(input, int)},
		{(float)va_arg(input, double)},
		{va_arg(input, char *)}
	}

	int i = 0;
	va_list input;

	va_start(input, format);
	while (format != '\0')
		if (format[i] == form_spec[i].specifier && form_spec.specifier != NULL)
		{

}
