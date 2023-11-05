#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * passed into it.
 * @argc: counter for command linine arguments
 * @argv: array variable pointer for command line
 * arrguments
 * Return: 0 as successful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
