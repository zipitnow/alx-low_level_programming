#include "dog.h"
/**
 * strlen - function to calculate string
 * length
 * @length: variable to be calculated
 * Return: len or null
 */

int _strlen(char *length)
{
	int len = 0;

	while (length[len] != '\0')
		len++;
	return (len);
}
