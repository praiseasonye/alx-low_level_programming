#include "main.h"

/**
 * read_textfile - a function that reads a file and prints it to the
 *                 POSIX standard output.
 *
 * @filename: a pointer to the name of the file in strings
 * @letters: the number of letters it should read and print.
 *
 * Return: the numbert of letters it could print and read.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes, write_bytes;
	char *buff;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, buff, letters);
	if (read_bytes == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buff, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		close(fd);
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (write_bytes);
}
