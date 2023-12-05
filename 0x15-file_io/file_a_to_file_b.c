#include "main.h"
#define BUFFER_SIZE 1024

void copy_file(const char* file_from, const char* file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

    // Check if the number of arguments is correct
	if (access(file_from, F_OK) == -1 || access(file_from, R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}

    // Open file_from for reading
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}

    // Check if file_to already exists and truncate it
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s", file_to);
		exit(99);
	}

    // Copy the content of file_from to file_to
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s", file_to);
			exit(99);
		}
	}

    // Close file descriptors
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

int main(int argc, char* argv[])
{
	const char *file_from, file_to;
	// Check if the number of arguments is correct
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	copy_file(file_from, file_to);

	return 0;
}
