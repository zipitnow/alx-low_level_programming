#include "dog.h"

/**
 * _strcpy - function to copy strings from
 * source to destination
 * @dest: string variable of destination
 * @src: pointer to source sting
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
