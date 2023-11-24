#include "main.h"

/**
 * _strchr - function that locates a character
 * in a strin
 * @s: a pointer to the first occurance
 * of a character
 * @c: a character to be pointed at
 * Return: a pointer or null if fail
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
