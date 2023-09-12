#include "main.h"
#include <stdio.h>

/**
 * _strcat - function is used to concatenate (append) one string to
 * the end of another string
 * @dest: This is a pointer to the destination string,
 * which is the string you want to concatenate src
 * @src: This is a pointer to the source string, which is
 * the string you want to append to the end of dest
 * Return: dest as result
 */

char *_strcat(char *dest, const char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
	dest_ptr++;
	}

	while (*src != '\0')
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
