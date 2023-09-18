#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function is used to copy a null-terminated string
 * src into another null-terminated string dest.
 * @dest: This is a pointer to the destination string
 * where the content of src will be copied.
 * @src: This is a pointer to the source string,
 * the content of which will be copied into dest.
 * Return: destination value as result
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_start);
}
