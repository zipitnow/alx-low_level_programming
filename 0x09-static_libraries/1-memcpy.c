#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function is used to copy a block of memory from
 * a source address to a destination address.
 * @dest: This is a pointer to the destination memory
 * location where you want to copy the data.
 * @src: This is a pointer to the source memory
 * location from which you want to copy the data.
 * @n:This is the number of bytes to copy from
 * the source to the destination.
 * Return: dest as result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest <= src || dest >= (src + n))
	{
	while (n--)
	{
		*dest++ = *src++;
	}
	}
	else
	{
	dest += n - 1;
	src += n - 1;
	while (n--)
	{
	*dest-- = *src--;
	}
	}

	return (dest);
}
