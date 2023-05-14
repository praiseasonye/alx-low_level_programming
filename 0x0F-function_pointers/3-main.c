#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that does simple arithmetic on two integars
 *        from the command line
 * @argc: the number of arguments passe go the main function
 * @argv: an array containing the inputs entered by the user
 *
 * Return: the result of the operation performed by the function or
 *         Error if the arguments are invlid or a wrng operator is
 *         to the command line.
 *
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(argv[2]) == NULL || *argv[1] == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
