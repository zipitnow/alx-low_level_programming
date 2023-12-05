#include "main.h"
#define BUFFER_SIZE 1024
/**
 * copy_file - a function to copy the content
 * of fd_from to d_to
 * @file_from: pointer to int argc
 * @file_to: pointer to argv[]
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (access(file_from, F_OK) == -1 || access(file_from, R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s", file_to);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s", file_to);
			exit(99);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
}
/**
 * main - a program to copy from file_from to file_to
 * @argc: command line arg counter
 * @argv: command line arg variable
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	copy_file(file_from, file_to);

	return (0);
}
