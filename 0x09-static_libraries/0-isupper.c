#include "main.h"
#include <stdio.h>

/**
 * _isupper - function is a custom implementation of
 * a character checking function in C that checks
 * whether a given character c is an uppercase letter
 * @c: an integer
 * Return: 0 if true and 1 if false
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
