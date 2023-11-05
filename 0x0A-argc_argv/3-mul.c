#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: counter command line argument
 * @argv: arrar pointer variable argument
 * Return: 0 as successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
