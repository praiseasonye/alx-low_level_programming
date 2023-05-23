#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct specifier - a structure that holds and prints
 *                    differnt data types
 *
 * @format: a string containig the different data types to be
 *          printed.
 * @print_arg: a function pointer that points to the suitable function
 *             after the speifier has been selected.
 *
 */

typedef struct specifier
{
	char *format;
	void (*print_arg)(va_list args);
} specifier_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* variadic_functions.h */
