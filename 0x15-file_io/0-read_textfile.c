#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 *
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pF;
	ssize_t count = 0, bytes_read = 0, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	pF = open(filename, O_RDONLY);
	if (pF == -1)
		return (0);

	buffer = malloc(500);
	if (buffer == NULL)
	{
		close(pF);
		return (0);
	}
	bytes_read = read(pF, buffer, 500);
	while (count < (ssize_t)letters && bytes_read > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(pF);
			free(buffer);
			return (0);
		}
		count += bytes_written;
		bytes_read = read(pF, buffer, 500);
	}

	close(pF);
	free(buffer);

	return (count);
}
