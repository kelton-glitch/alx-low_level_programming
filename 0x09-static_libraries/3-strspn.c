#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * @s: number of bytes in initial segment
 * @accept: used to compare bytes from 's'
 * Return: value of comparison betwen 's' and "accept"
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}

			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}
		i++;

	}

	return (count);
}
