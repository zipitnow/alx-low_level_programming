#include "main.h"

/**
 * _strspn - a function that gets the length
 * of a prefix substring
 * @s: pointer to string
 * @accept: pointer to string
 * Return: number of bytes when comparing s to
 * accept consisting only
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str_len = 0;
	int checker, i;

	while (*s != '\0')
	{
		checker = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				checker = 1;
				break;
			}
		}
		if (checker == 0)
			break;
		str_len++;
		s++;
	}
	return (str_len);
}
