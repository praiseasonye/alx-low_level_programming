#include "main.h"

/**
 * append_text_to_file - a functon that appends text at the end of a file.
 *
 * @filename: a string representing the name of the file
 *
 * @text_content: the text to append to filename
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	write_bytes = write(fd, text_content, strlen(text_content));
	if (write_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
