#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - function is used to find the first occurrence of
 * any character in the string accept within the string s
 * @s: a pointer to the first character
 * @accept: a pointer to a set of characters
 * Return: s if found a match else null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
