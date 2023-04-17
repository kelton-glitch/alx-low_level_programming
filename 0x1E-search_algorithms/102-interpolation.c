#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;
	size_t i;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = left + ((
						(double)(right - left) / (array[right] - array[left])) *
					(value - array[left]));
			if (mid > size - 1)
			{
				printf("Value checked array[%lu] is out of range\n", mid);
			}
			else
			{
				printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
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
					return (mid);
				}
			}
		}
	}
	return (-1);
}

