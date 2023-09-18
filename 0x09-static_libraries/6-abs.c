#include "main.h"
#include <stdio.h>

/**
 * _abs - function is a custom implementation of
 * the absolute value function in C
 * @n: the integer of an absolute value
 * Return: n as final value
 */

int _abs(int n)
{
	if (n < 0)
	{
	return (-n);
	}
	else
	{
	return (n);
	}
}
