#include "main.h"
#include <stdio.h>

/**
 * _strstr - function is used to find the first occurrence of
 * a substring (needle) within a larger string (haystack)
 * @needle: a pointer to the first occurrence
 * @haystack: a pointer to a large  string
 * Return: a pointer to the first character else null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
