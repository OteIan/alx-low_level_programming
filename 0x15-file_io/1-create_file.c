#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write the file
 *
 * Return: 1 on success, -1 on failure
 * if file cannot be created or written, write "fails"
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, sizeof(text_content));
		if (bytes_written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
