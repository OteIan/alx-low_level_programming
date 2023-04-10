#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int total = argc - 1;

	printf("%d", total);

	return (0);
}
