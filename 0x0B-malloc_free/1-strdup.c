#include "main.h"
/**
 * _strdup - A functon that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter
 * @str: pointer for characters
 * Return: Null if empty or dup_str
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dup_str = (char *)malloc(sizeof(*str) * 1);

	if (str == NULL)
		return (NULL);

	if (dup_str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dup_str[i] = str[i];
		i++;
	}
	return (dup_str);
}
