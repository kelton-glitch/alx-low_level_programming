#include "main.h"

/**
 * _memcpy - copy number of bytes from address "dest" to address "src"
 * @dest: address of destination of content
 * @src: address of source of data
 * @n: bytes of the memory
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
