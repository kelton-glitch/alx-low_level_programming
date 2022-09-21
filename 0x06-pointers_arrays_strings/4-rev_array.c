#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *start_r, *end_r, r;
	int i = 0;

	start_r = a;
	end_r = a;

	for (; i < n - 1; i++)
		end_r++;

	for (; i < n / 2; i++)
	{
		r = *end_r;
		*end_r = *start_r;
		*start_r = r;


		start_r++;
		end_r--;
	}
}
