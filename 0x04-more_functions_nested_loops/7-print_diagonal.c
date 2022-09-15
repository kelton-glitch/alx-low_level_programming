#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: parameter
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
