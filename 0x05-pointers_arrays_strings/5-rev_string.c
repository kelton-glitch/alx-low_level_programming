#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer
 */

void rev_string(char *s)
{
	int n, full, half;
	char first, last;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	full = n - 1;
	half = full / 2;
	while (half >= 0)
	{
		first = s[full - half];
		last = s[half];
		s[half] = first;
		s[full - half] = last;
		half--;
	}

}
