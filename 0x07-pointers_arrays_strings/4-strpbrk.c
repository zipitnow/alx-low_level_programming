#include "main.h"

/**
 * _strpbrk - function that searches a srtring
 * for any of a set of bytes
 * @s: pointer sto string
 * @accept: pointer to string
 * Return: matching string or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
