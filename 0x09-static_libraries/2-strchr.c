#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function is used to find the first occurrence of
 * a substring (needle) within a larger string (haystack)
 * @haystack: This is a pointer to the string in which you want to
 * search for the needle
 * @needle: This is a pointer to the substring that you want to
 * find within the haystack
 * Return: haystack as found result
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
	return (haystack);
	}

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
