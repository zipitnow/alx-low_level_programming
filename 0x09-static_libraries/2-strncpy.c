#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function is used to copy at most n characters
 * from the source string src into the destination string dest.
 * @dest: This is a pointer to the destination string,
 * where the characters from src will be copied.
 * @src: This is a pointer to the source string from
 * which characters will be copied.
 * @n: This is the maximum number of characters to copy from src to dest
 * Return: dest_start as the result
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	while (n > 0)
	{
	*dest = '\0';
	dest++;
	n--;
	}

	return (dest_start);
}
