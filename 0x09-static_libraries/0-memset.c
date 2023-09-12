#include "main.h"
#include <stdio.h>
/**
 *_memset -  function is designed to set a block of memory to
 *a specified value for the first n bytes and returns
 * a pointer to the updated memory block.
 *@s: This is a pointer to the memory block that you want to set.
 *@b:This is the value you want to set each byte of the memory block to.
 *@n:This is the number of bytes you want to set in the memory block.
 *Return: s as true value
 */

char *_memset(char *s, char b, unsigned int n)
	{
	char *ptr = s;

	for (unsigned int i = 0; i < n; i++)
	{
	*ptr = b;
	ptr++;
	}

	return (s);
	}
