#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1:  an argument string
 * @s2: an argument string
 * Return: NULL /"" on failure else value
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len_str1 = 0;
	int len_str2 = 0;
	char *tot_str;

	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");


	while (s1[len_str1] != '\0')
	{
		len_str1++;
	}

	while (s2[len_str2] != '\0')
	{
		len_str2++;
	}

	tot_str = (char *)malloc((len_str1 + len_str2 + 1) * sizeof(char));

	if (tot_str == NULL)
		return (NULL);

	for (i = 0; i < len_str1; i++)
	{
		tot_str[i] = s1[i];
	}

	for (j = 0; j < len_str2; j++, i++)
	{
		tot_str[i] = s2[j];
	}
	tot_str[i] = '\0';

	return  (tot_str);

}
