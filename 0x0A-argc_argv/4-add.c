#include "main.h"

/**
 * check_num - checks for digits
 * @str: string to be checked
 * Return: always 0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			j = _atoi(argv[i]);
			sum += j;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}
	printf("%d\n", sum);
	return (0);
}
