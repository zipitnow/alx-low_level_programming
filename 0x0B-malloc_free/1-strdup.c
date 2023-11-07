#include "main.h"

char *_strdup(char *str)
{
	int i = 0;
	char *dup_str = (char *)malloc(sizeof(char)*1);

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
