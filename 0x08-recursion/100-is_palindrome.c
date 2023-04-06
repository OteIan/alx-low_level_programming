#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: 1 if it is otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters for palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: length
 * Return: 1 if it is otherwise 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (1);
	if (i >= len)
		return (0);
	return (check_pal(s, i + 1, len - 1));
}
