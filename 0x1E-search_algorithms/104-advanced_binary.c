#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;
	size_t i;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i != right)
					printf(", ");
			}
			if (array[mid] < value)
			{
				left = mid + 1;
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
			}
			else
			{
				if (mid == 0 || array[mid - 1] != value)
					return (mid);
				right = mid - 1;
			}
		}
	}
	return (-1);
}

