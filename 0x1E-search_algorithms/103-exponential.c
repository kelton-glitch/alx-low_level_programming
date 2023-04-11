#include "search_algos.h"
/**
 * bin_search - searches for a value in a sorted array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @left: left index of the array
 * @right: right index of the array
 * @value: value to search for
 *
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1 
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
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
            if (array[mid] < value){
                left = mid + 1;
            }
            else if (array[mid] > value){
                right = mid - 1;
            }
            else{
                return (mid);
            }
        }
    }
    return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t bound = 1;

    if (array != NULL)
    {
        while (bound < size && array[bound] < value)
        {
            printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
            bound *= 2;
        }
        if (bound + 1 < size)
            left = bound + 1;
        else
            left = size;
        printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, left - 1);
        if (result != -1)
            return (result);
    }
    return (-1);
}
