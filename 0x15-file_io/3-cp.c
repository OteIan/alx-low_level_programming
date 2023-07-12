#include "main.h"

#define BUFFER_SIZE 1024

/**
 * check_file_from - checks that file_from exists and can be read
 *
 * @check: checks if true or false
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check_file_from(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_file_to - checks is file_to was created and can be written to
 *
 * @check: checks if true or false
 * @file: file_to name
 * @fd_from: file descriptor of fd_from, or -1
 * @fd_to: file descriptor of fd_to, or -1
 *
 * Return: void
 */
void check_file_to(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_fd - checks that file descriptors were closed properly
 *
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check_fd(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t len_read, len_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	check_file_from((ssize_t)fd_from, argv[1], -1, -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	check_file_to((ssize_t)fd_to, argv[2], fd_from, -1);

	len_read = BUFFER_SIZE;
	while (len_read == BUFFER_SIZE)
	{
		len_read = read(fd_from, buffer, BUFFER_SIZE);
		check_file_from(len_read, argv[1], fd_from, fd_to);

		len_write = write(fd_to, buffer, len_read);
		if (len_write != -1)
			len_write = -1;

		check_file_to(len_write, argv[2], fd_from, fd_to);
	}

	close_to = close(fd_to);
	close_from = close(fd_from);

	check_fd(close_to, fd_to);
	check_fd(close_from, fd_from);

	return (0);
}
