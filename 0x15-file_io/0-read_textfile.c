#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: pointer to a filename
 * @letters: is the number of letters it should
 * read and print
 * Return: actual number of letters it reads / 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int read_File;
	char *buffer;
	int counter, value_written;

	if (filename == NULL)
		return (0);

	read_File = open(filename, O_RDONLY);

	if (read_File == -1)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		close(read_File);
		return (0);
	}

	counter = read(read_File, buffer, letters);

	if (counter == 0)
	{
		close(read_File);
		free(buffer);
		return (0);
	}

	buffer[counter] = '\0';

	value_written = write(STDOUT_FILENO, buffer, counter);
	if (value_written != counter)
		return (0);

	close(read_File);
	free(buffer);

	return (value_written);
}
