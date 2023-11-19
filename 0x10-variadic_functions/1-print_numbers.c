#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
        int str_len = 0;
        unsigned int i;
	int j;
        char *str;
        va_list num_args;
        va_start(num_args, n);

	if (separator == NULL)
		exit(0);
        while (separator[str_len] != '\0')
                str_len++;
	str = (char *)malloc((sizeof(char) * str_len) + 1);
	if (str == NULL)
		exit(0);

	j = 0;

	while (separator[j] !=  '\0')
	{
		str[j] = separator[j];
		j++;
	}

        for (i = 0;i < n; i++)
        {
                printf("%d", va_arg(num_args,int));
                if (i < n - 1)
                {
			printf("%s", str);
                 
                }
        }
	free(str);
        va_end(num_args);
        printf("\n");
}
