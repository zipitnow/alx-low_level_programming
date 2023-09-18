#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function is used to compare two null-terminated strings,
 * s1 and s2, and determine their lexicographical order.
 * @s1: is lexicographically less than s2, the function
 * returns a negative integer.
 * @s2:is lexicographically greater than s2, the function
 * returns a positive integer.
 * Return: 0 if s1 is equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
