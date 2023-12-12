#include "search_algos.h"

/**
 * linear_search - Functionn that sarches for a value in an
 * array of integers using linear search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search in the array
 *
 * Return: The first index of where value is located
 * or -1 if the value is no found or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
			}
	}
	return (-1);
}
