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
	int fd = 0, len = 0, i;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	for (i = 0 ; text_content[i] != '\0' ; i++)
		len++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
