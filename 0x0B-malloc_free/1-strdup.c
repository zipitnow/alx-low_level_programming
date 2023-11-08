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
	int len_str = 0;
	char *dup_str;

	while (str[len_str] != '\0')
	{
		len_str++;
	}
	dup_str = malloc((len_str * sizeof(char)) + 1);
	if (dup_str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
