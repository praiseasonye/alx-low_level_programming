#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: the name of the file to be created.
 *
 * @text_context: a pointer to the text that dhoul be written to filename
 *
 * Return: 1 on succes -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	write_bytes = write(fd, text_content, strlen(text_content));
	if (write_bytes == -1)
	{
		return (-1);
	}
	close(fd);
	return (-1);
}
