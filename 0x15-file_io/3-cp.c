#include "main.h"

#define MAXSIZE 4096
#define SE STDERR_FILENO

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])

{
	int input_fd, output_fd, istatus, ostatus;
	char buf[MAXSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(SE, "Usage: cp file_from file_to\n");
		exit(EXIT_FAILURE);
	}

	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
	dprintf(SE, "Error: Cannot open input file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}

	output_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (output_fd == -1)
	{
		dprintf(SE, "Error: Cannot open output file %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	do {
		istatus = read(input_fd, buf, MAXSIZE);
		if (istatus == -1)
	{
		dprintf(SE, "Error: Cannot read from input file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (istatus > 0)
	{
		ostatus = write(output_fd, buf, istatus);
	if (ostatus == -1)
	{
		dprintf(SE, "Error: Cannot write to output file %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	}
	}
	} while (istatus > 0);

	if (close(input_fd) == -1)
	{
		dprintf(SE, "Error: Cannot close input file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (close(output_fd) == -1)
	{
		dprintf(SE, "Error: Cannot close output file %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

