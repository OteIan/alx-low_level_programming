#include "main.h"

/**
 * main - Copies content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, otherwise exit with the appropriate exit code
 */
int main(int argc, char *argv[])
{
	int fro, to;
	int r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	r = read(fro, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro == -1 || r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(fro, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	_close(fro);
	_close(to);
	return (0);
}

/**
 * create_buffer - Allocates 1024 bytes
 *
 * @name: Name of the file
 *
 * Return: Pointer to the allocated buffer
 */
char *create_buffer(char *name)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", name);
		exit(99);
	}
	return (buf);
}

/**
 * _close - Closes file descriptors
 *
 * @fd: file descriptor
 *
 * Return: void
 */
void _close(int fd)
{
	int i = close(fd);

	if (i == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
