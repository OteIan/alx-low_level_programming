#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1 && argc < 4)
	{
		int num1 = _atoi(argv[1]);
		int num2 = _atoi(argv[2]);
		int prod = num1 * num2;

		printf("%d", prod);

		return (0);
	}
	else
	{
		printf("Error");

		return (1);
	}
}
