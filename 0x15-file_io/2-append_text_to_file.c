#include "main.h"

/**
 * _strlen - functio to calculate string length
 * @filename: pointer to a string
 * Return: string lenth
 */

int _strlen(char *filename)
{
	int i = 0;

	while (filename[i] != '\0')
		i++;
	return (i);
}

/**
 * append_text_to_file - function that appends text
 * at the end of a file
 * @filename: pointer to a file
 * @text_content: pointer to file content
 * Return: 1 as success or -1 as failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int new_file;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_WRONLY | O_APPEND);
	if (new_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		write(new_file, text_content, _strlen(text_content));
	}
	else
	{
		close(new_file);
		return (1);
	}
	close(new_file);
	return (1);
}
