#include "main.h"
#include <stdio.h>

/**
 * _strncat -  function is used to concatenate (append) at
 * most n characters from one string to the end of another string.
 * @dest: This is a pointer to the destination string,
 * which is the string you want to concatenate src to.
 * The result of the concatenation will be stored in dest.
 * @src: This is a pointer to the source string,
 * which is the string you want to append to the end of dest.
 * @n: This is the maximum number of characters from
 * src that you want to append to dest.
 * If n is greater than the length of src,
 * the entire src string will be appended.
 * Return: dest as result
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
	dest_ptr++;
	}

	while (*src != '\0' && n > 0)
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
	n--;
	}

	*dest_ptr = '\0';

	return (dest);
}
