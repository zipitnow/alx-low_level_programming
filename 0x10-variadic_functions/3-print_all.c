#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 * to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int i, bool_checker;
	char *str;
	va_list num_args;

	va_start(num_args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(num_args, int));
		bool_checker = 1;
		break;
	case 'i':
		printf("%d", va_arg(num_args, int));
		bool_checker = 1;
		break;
	case 'f':
		printf("%f", va_arg(num_args, double));
		bool_checker = 1;
		break;
	case 's':
		str = va_arg(num_args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		bool_checker = 1;
		break;
	default:
		bool_checker = 0;
	}

	if (format[i + 1] != '\0' && bool_checker == 1)
		printf(", ");
	i++;
	}
	va_end(num_args);
	printf("\n");

}
