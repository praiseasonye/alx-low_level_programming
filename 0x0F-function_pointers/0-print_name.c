#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: the name to be printed.
 * @f: a pointer to a function that prints the
 * name in a special way.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
