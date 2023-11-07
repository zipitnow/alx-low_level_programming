#include "main.h"

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrChar = (char *)malloc(size * sizeof(char));
	if ( size == 0)
		return (NULL);

	if ( arrChar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arrChar[i] = c;
	}

	return arrChar;
}
