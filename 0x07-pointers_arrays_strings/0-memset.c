#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer of memory to fill
 * @b: value to set
 * @n: bytes of memory allocated
 * Return: destination value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
