#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * initializes it with a specific char.
 *@size: the size of the array
 *@c: characters to be printed
 *Return: Null if 0/NULL. Else arrChar
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrChar = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (arrChar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arrChar[i] = c;
	}

	return (arrChar);
}
