#include "main.h"

/**
 * _strncat - concatenates a string
 * @dest: resulting value
 * @src: source string
 * @n: precises the number of bytes to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
