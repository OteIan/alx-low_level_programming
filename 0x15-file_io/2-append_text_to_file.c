#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: pointer to a string containing the file name
 * @text_content: pointer to a string to be added to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, len, nwritten;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (!fp)
		return (-1);

	if (!text_content)
	{
		close(fp);
		return (-1);
	}

	len = 0;
	while (text_content[len])
		len++;

	nwritten = write(fp, text_content, len);
	if (nwritten < 0 || nwritten != len)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
