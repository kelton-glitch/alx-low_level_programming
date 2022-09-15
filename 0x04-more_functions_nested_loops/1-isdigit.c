#include "main.h"

/**
 * _isdigit - checks if value is  digit
 * @c: parameter
 * Return: 1 if it is a digit, 0 if it is not a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
