#include <stdio.h>

/**
 * main - Entry point
 * Return: something
 */
int main(void)
{
		int x;
		unsigned long int a, b, c, d;

		a = 1;
		b = 2;
		d = 0;

		for (x = 1; x <= 33; ++x)
		{
			if (a < 4000000 && (a % 2) == 0)
			{
				d = d + a;
			}
			c = a + b;
			a = b;
			b = c;
		}
		printf("%lu\n", d);

		return (0);
}
