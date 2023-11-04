#include <stdio.h>

/**
 * main - a program that prints its name
 *@argc: counter for command line argument
 *@argv: array of pointers listing all arguments
 *Return: 0 upon successful execution
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		printf("%s\n", argv[i]);
	}
	return (0);
}
