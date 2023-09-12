#include "main.h"
#include <stdio.h>

/**
 * isdigit - function is part of C Staandard Library, and
 * it is used to check if a given character is a digit (0-9)
 * @c: if this character falls within the ASCII range of characters
 * Return: the result
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (c);
	}
	else
	{
		return (1);
	}
}
