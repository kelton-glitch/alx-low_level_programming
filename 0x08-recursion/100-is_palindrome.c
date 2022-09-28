#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: recursive case
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @r: position
 * Return: boolean
 */

int p1(char *s, int r)
{
	if (r < 1)
		return (1);

	if (*s == *(s + r))
	{
		return (p1(s + 1, r - 2));
	}

	return (0);
}

/**
 * is_palindrome - checks if a number is a palindrome
 * @s: pointer to string
 * Return: value
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
