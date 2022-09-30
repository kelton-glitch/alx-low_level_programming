#include "main.h"
/**
 * _isalpha - checks if an object is a letter or not
 * @c: It determines whether to print 1 or 0
 * Return: 0
 */

	int _isalpha(int c)
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			return (1);
		else
			return (0);

	}
