#include "main.h"

/**
 * read_textfile - reads a text file
 *
 * @filename:
 * @letters:
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t nwritten;
	ssize_t nread;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);

	buffer = malloc(letters + 1);
	if (!buffer)
	{
		fclose(fp);
		return (0);
	}

	nread = fread(buffer, 1, letters, fp);
	if (!nread)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten < 0 || nwritten != nread)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);
	return (nwritten);
}
