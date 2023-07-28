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
	int re, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	re = read(fro, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fro == -1 || re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	wr = write(to, buffer, re);
	if (to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}

	re = read(fro, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
