#include "main.h"

/**
 * _strlen - function to calc string length
 * @name: pointer to string
 * Return: length of string or 0
 */

int _strlen(char *name)
{
	int i = 0;

	while (name[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strstr - function that locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to string
 * Return: substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int len1, len2, i, j;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	len1 = _strlen(haystack);
	len2 = _strlen(needle);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			else if (j == len2 - 1)
				return (&haystack[i]);
		}

	}
	return (NULL);
}
