#include "main.h"
#include <stdio.h>
/**
 * _abs - absolute value function
 * @n: is an integer value
 *
 * Return: 0
 */

	int _abs(int n)
	{
		if (n < 0)
			return (n * (-1));

		else if (n == 0)
			return (0);

		else
			return (n);

	}
