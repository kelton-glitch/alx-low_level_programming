#include "main.h"

/**
 * print_line - prints lines
 * @n: parameter
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
