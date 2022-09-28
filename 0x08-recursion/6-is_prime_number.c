#include "main.h"
/**
 * evaluate_num - loop
 * @n: integer
 * @iterator: number to iterate
 * Return: 1 or 0
 */

int evaluate_num(int n, int iterator)
{
	if (iterator == n - 1)
		return (1);

	else if (n % iterator == 0)
		return (0);

	if (n % iterator != 0)
		return (evaluate_num(n, iterator + 1));

	return (0);
}


/**
 * is_prime_number - checks if a number is prime or not
 * @n: integer
 * Return: 1 if number is prime and 0 if not
 */

int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (evaluate_num(n, iterator));
}
