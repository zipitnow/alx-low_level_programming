#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 * to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list num_args;

	va_start(num_args, format);
	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(num_args, int));
		break;
	case 'i':
		printf("%d", va_arg(num_args, int));
		break;
	case 'f':
		printf("%f", va_arg(num_args, double));
		break;
	case 's':
		str = va_arg(num_args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		break;
	}
	i++;
	if (format[i])
		printf(", ");
	}
	va_end(num_args);
	printf("\n");

}
