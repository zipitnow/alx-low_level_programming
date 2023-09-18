#include "main.h"
#include <string.h>

/**
 * _strspn - function is used to find the length of the
 * initial substring in a string s that consists entirely of
 * characters from the character set specified in the string accept.
 * @s: initial substring of characters
 * @accept: set of specified characters of string
 * Return: count as result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
