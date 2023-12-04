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
 * create_file - function to create a file
 * @filename: pointer to a file
 * @text_content: pointer to file content
 * Return: 1 as success or -1 as failure
 */

int create_file(const char *filename, char *text_content)
{
	int new_file;
	int textLength, compareLength;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		int textLength = _strlen(text_content);
		int compareLength = write(new_file, text_content, textLength);

		if (compareLength != textLength)
		{
			close(new_file);
			return (-1);
		}
	}
	close(new_file);
	return (1);
}
