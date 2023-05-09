#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success,or corresponding exit code
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, nread, nwritten;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		nwritten = write(fd_to, buffer, nread);
		if (nwritten != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		return (EXIT_FAILURE);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
