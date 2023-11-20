#include "variadic_functions.h"
/**
 * print_strings - functions that prints strings
 * @separator: character strings
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list num_args;

	va_start(num_args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(num_args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	va_end(num_args);
	printf("\n");
}
