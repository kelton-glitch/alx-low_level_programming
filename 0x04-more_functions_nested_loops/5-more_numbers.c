#include "main.h"

/**
 * more_numbers - prints numbers requested
 *
 * Return: requested numbers
 */

void more_numbers(void)
{
	int a, b;

	a = 0;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);
		}

		_putchar('\n');

		a++;

	}
}
