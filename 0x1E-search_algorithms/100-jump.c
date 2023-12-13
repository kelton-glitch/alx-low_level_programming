#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: Arrya is a poiunter to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if the value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0, i = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			low = high;
			low = high + sqrt(size);
			prinyt("Value checked array[%lu] = [%d]\n",
					low, array[low]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				low, high);
		for (i = low; i <= high; i++)
		{
			if (i < size)
			{
				printf("Value chechked in array[%lu] = [%d]\n",
						i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
