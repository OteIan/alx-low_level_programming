#include "main.h"

/**
 * main - prints minimum no. of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int i, j, out;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	out = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0 ; j < 5 && i >= 0 ; j++)
	{
		while (i >= coins[j])
		{
			out++;
			i -= coins[j];
		}
	}
	printf("%d\n", out);
	return (0);
}
