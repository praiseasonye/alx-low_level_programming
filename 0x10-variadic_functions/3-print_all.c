#include "variadic_functions.h"

void print_char(va_list input);
void print_int(va_list input);
void print_float(va_list input);
void print_string(va_list input);

/**
 * print_all - a function that prints anything
 * @format: the string to specify the kind of format to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	specifier_t spec_n_args[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	int i = 0, j = 0;
	va_list input;
	char *separator = "";

	va_start(input, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*(spec_n_args[j].format) == format[i])
			{
				printf("%s", separator);
				spec_n_args[j].print_arg(input);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(input);
}

/**
 * print_char - a function that prints a character
 *
 * @input: a pointer to the list of values inputted into the
 *         variadic input slot in the print_all fuction
 *         above.
 *         This function is called if the input points to a
 *         single character.
 *
 * Return: void.
 */

void print_char(va_list input)
{
	char character;

	character = (char)va_arg(input, int);
	printf("%c", character);
}

/**
 * print_int - a function that prints an integar
 *
 * @input: a pointer to the list of values inputted into the
 *         variadic input slot in the print_all function
 *         above.
 *         This function is called if the input points to an
 *         int.
 *
 * Return: void.
 */

void print_int(va_list input)
{
	int number;

	number = va_arg(input, int);
	printf("%d", number);
}

/**
 * print_float - a function that prints a float
 *
 * @input: a pointer the list of values inputted into the
 *         variadic input slot of the print_all function
 *         above.
 *         This function is called if the input points to a
 *         float.
 *
 * Return: void.
 */

void print_float(va_list input)
{
	float decimal;

	decimal = (float)va_arg(input, double);
	printf("%f", decimal);
}

/**
 * print_string - a function that prints a string
 *
 * @input: a pointer to the list of values inputted into the
 *         variadic input slot of the print_all function
 *         above.
 *         This function is called if the input points to a
 *         string.
 *
 * Return: void.
 */

void print_string(va_list input)
{
	char *string;

	string = va_arg(input, char *);
	if (string == NULL)
		printf("(nil)");
	printf("%s", string);
}
