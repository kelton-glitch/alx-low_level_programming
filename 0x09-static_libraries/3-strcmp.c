#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}

	return (*str_one - *str_two);
}
