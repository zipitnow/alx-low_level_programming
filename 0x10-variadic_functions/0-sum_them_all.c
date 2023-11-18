#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns sum of all
 * its parameters
 * @n: number of args
 * Return: sum_total
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum_total = 0;
	unsigned int i;
	va_list num_args;

	if (n == 0)
		return (0);

	va_start(num_args, n);

	for (i = 0; i < n; i++)
	{
		sum_total += va_arg(num_args, int);
	}

	va_end(num_args);

	return (sum_total);
}
