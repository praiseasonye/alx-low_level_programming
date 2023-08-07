#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 *
 * @filename: A pointer to the name of the file.
 *
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_var, read_var, write_var;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_var = open(filename, O_RDONLY);
	read_var = read(open_var, buffer, letters);
	write_var = write(STDOUT_FILENO, buffer, read_var);

	if (open_var == -1 || read_var == -1 || write_var == -1 || write_var != read_var)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_var);

	return (write_var);
}
