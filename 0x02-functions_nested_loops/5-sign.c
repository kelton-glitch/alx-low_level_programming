#include "main.h"

/**
 * print_sign - detects if a number is positive or negative
 * @n: input value
 * Return: 0
 */

	int print_sign(int n)
	{
		int value;

		if (n > 0)
		{
			value = 1;

			_putchar('+');
		}
		else if (n == 0)
		{
			value = 0;

			_putchar('0');
		}
		else
		{
			value = -1;

			_putchar('-');
		}

		return (value);

	}
