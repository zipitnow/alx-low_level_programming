#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char *str1 = malloc(sizeof(*s1)+ 1);
	char* str2 = malloc(sizeof(*s2) + 1);

	if (s1 == NULL)
		return (" ");
	
	if (s2 == NULL)
		return (" ");

	
	while (*s2 != '\0')
	{
		str2[i] = s2[i];
		count++;
		i++;
		s2++;
	}

	while ( *s1 != '\0')
	{
		str1[j] = s1[j];
		count++;
		s1++;
	}
	
	char *tot_str =

	return  str1;

}
