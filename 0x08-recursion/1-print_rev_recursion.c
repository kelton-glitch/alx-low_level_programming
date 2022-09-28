#include "main.h"

/**
 * _print_rev_recursion - prints a string in the reverse
 * @s: String
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
