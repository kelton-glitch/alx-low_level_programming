#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1
 * @n: The bit
 * @index: index of the bit
 *
 * Return: 1 if success, -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
