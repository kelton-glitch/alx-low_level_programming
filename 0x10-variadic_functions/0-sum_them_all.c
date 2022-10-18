#include "variadic_functions.h"

/**
 * sum_them_all - adds a number
 @n: param
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list list;
    unsigned int i;
    int sum = 0;

<<<<<<< HEAD
    if (n== 0)
    return (0);

    va_start(list, int);
=======
	va_start(valist, n);
	
	if (n == 0)
		return (0);

>>>>>>> ec33396f854e1af3b4222700faf5d17f90e44ecf

    for (i = 0; i < n; i++)
    {
        sum += va_arg(list, int)
    }

    va_end(list);

    return (sum);

 }
