#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbrd, nbwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	nbrd = read(fd, buffer, letters);
	nbwr = write(STDOUT_FILENO, buffer, nbrd);

	close(fd);

	free(buffer);

	return (nbwr);
}

