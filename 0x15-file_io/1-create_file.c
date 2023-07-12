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
	int len;/* Stores the length of text_content */
	ssize_t bytes_written = 0;/* Stores no. of bytes written to the file */

	/* Checks if 'filename' is a NULL pointer */
	if (filename == NULL)
		return (-1);

	/* Checks if text_content is not a NULL pointer*/
	if (text_content != NULL)
	{
		for (len = 0 ; text_content[len] != '\0' ; len++)
			continue;
	}

	/* Opens the file as per the instructions */
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	/* Checks if the 'open' call failed */
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
	/* Writes 'len' number of bytes from 'text_content' to file 'fd' */
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
