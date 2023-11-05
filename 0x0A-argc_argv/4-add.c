#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: counter for command line argument
 * @argv: variable array for argument
 * Return: 0 as success and 1 as failure
 */

int main(int argc, char *argv[])
{
	int i;

	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		j += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
