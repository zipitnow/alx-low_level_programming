#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount
 * @argc: counter for commanline argument
 * @argv: array pointer for argument
 * Return: 0 success or 1 failure
 */

int main(int argc, char *argv[])
{
	int cents, i, counter;
	int coins[] = {25, 10, 5, 2, 1};
	int tot_coins = sizeof(coins) / sizeof(coins[0]);

	cents = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	counter = 0;
	for (i = 0; i < tot_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			counter++;
		}
	}
	printf("%d\n", counter);

	return (0);
}
