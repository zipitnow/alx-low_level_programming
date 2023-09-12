#include "main.h"
#include <stdio.h>

/**
 * _atoi -  function is used to convert a string
 * representing an integer into an actual integer value.
 * @s: This is a pointer to a string (character array) that
 * contains the integer representation you want to convert
 * Return: result as the outcome
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;


	while (*s == ' ' || *s == '\t')
	{
	s++;
	}


	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	else if (*s == '+')
	{
	s++;
	}


	while (*s >= '0' && *s <= '9')
	{
	result = result * 10 + (*s - '0');
	s++;
	}

	result *= sign;

	return (result);
}
