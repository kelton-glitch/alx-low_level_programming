#include "main.h"
/**
 * print_times_table - prints times table
 * @n: reference value to use
 * Return: void
 */

void print_times_table(int n)
{
	int a = 0, b, prd;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			prd = a * b;
			if (b == 0)
				_putchar('0' + prd);
			else if (prd < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prd);
			}
			else if (prd < 100)
			{
				_putchar(' ');
				_putchar('0' + prd / 10);
				_putchar('0' + prd % 10);
			}
			else
			{
				_putchar('0' + prd / 100);
				_putchar('0' + (prd - 100) / 10);
				_putchar('0' + prd % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
