#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct args - a structure that holds the differnt data types
 *
 * @c: char
 * @i: int
 * @f: float
 * @s: string
 *
 */

struct args
{
	char c;
	int i;
	float f;
	char *s;
}

/**
 * struct format_data - a structure that will be used to
 *                      iterate over the specifiers and thier data
 *                      types.
 * @specifier: the letter indicating a datatype
 * @data_args: these are the diferent datatypes. the diferent args
 *             would be stored here.
 */

typedef struct format_data
{
	char specifier;
	struct args data_args;
} fd_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* variadic_functions.h */
