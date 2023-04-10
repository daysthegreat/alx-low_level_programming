#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */

void check_file(int fd, char *filename)
{
  if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
	{
		int fd_src, fd_dest, err_close;
		ssize_t nread, nwritten;
		char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <file_from> <file_to>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	fd_src = open(argv[1], O_RDONLY);
	check_file(fd_src, argv[1]);

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_file(fd_dest, argv[2]);

	while ((nread = read(fd_src, buffer, BUFFER_SIZE)) > 0)
	{
		nwritten = write(fd_dest, buffer, nread);
	if (nwritten == -1)
	{
		perror("write");
		exit(EXIT_FAILURE);
	}
	}
	if (nread == -1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}

	err_close = close(fd_src);
	if (err_close == -1)
	{
		perror("close");
		exit(EXIT_FAILURE);
	}

	err_close = close(fd_dest);
	if (err_close == -1)
	{
		perror("close");
		exit(EXIT_FAILURE);
	}

	return (0);
}
