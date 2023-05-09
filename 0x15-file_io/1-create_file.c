#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - creates a file
 *
 * @filename: pointer to a string that contains the name of the file
 * @text_content: pointer to a NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, nwritten;

	if (!filename)
		return (-1);

/* O_WRONLY->Indicates file should be opened for writing only */
/* O_CREAT->Indicates file should be created if it does not exist */
/* O_TRUNC->File should be truncated if it already exists */
/* S_IRUSR | S_IWUSR-> specifies the file permissions */
/* Read-write permissions for the owner of the file */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (-1);
	}
	len = 0;
	while (text_content[len] != '\0')
		len++;
	nwritten = write(fd, text_content, len);
	if (nwritten == -1 || nwritten != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
