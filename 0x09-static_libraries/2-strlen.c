#include "main.h"
#include <stdio.h>

/**
 * _strlen - function is used to determine the length
 * (number of characters) of a null-terminated string
 * @s: This is a pointer to the null-terminated
 * string for which you want to find the length.
 * Return: length as the result
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	return (length);
}
