#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;/* Stores the file descriptor */
	int len;/* Stores the lrngth of 'text_content' */
	ssize_t bytes_written;/* Stores the no. of bytes written to the file */

	/* Checks if 'filename' is a NULL pointer */
	if (filename == NULL)
		return (-1);

	/* Checks if 'text_content' is not a NULL pointer */
	if (text_content != NULL)
	{
		for (len = 0 ; text_content[len] != '\0' ; len++)
			continue;
	}

	/* Opens the file as read only flag with append flag */
	fd = open(filename, O_WRONLY | O_APPEND);
	/* Checks if the open call failed */
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
