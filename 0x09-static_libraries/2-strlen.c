#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
