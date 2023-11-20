#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: character string
 * @n: total number of args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_args;

	va_start(num_args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(num_args);
	printf("\n");
}
