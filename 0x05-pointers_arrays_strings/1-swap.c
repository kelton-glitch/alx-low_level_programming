#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
