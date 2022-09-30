#include "main.h"

/**
 * _strncpy - copies string
 * @dest: resulting value
 * @src: source string
 * @n: precises the number of bytes to be used
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
