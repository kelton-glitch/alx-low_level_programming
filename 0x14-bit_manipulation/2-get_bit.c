#include "main.h"

/**
 * get_bit - returns the value ofa bit at a given index
 * @n: The bit
 * @index: The index to get the bit from, it starts from 0
 *
 * Return: If it fails, -1, otherwise the bit of the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
