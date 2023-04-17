#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = 0;
	size_t i;

	if (array != NULL)
	{
		right = sqrt(size);
		while (array[right] < value && right < size)
		{
			printf("Value checked array[%lu] = [%d]\n", right, array[right]);
			left = right;
			right += sqrt(size);
			if (right > size - 1)
				right = size;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", left, right);
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		for (i = left + 1; i <= right; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}

