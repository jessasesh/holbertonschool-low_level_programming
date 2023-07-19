#include "main.h"
/**
 * main - coppies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytesRead, bytesWritten;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* Read and Write at the same time */
	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	safe_close(fd_from);
	safe_close(fd_to);
	return (0);
}

/**
 * safe_close - close files
 * @fd: file descriptor
 */

void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
