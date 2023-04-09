#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters
 * Return: numbers of letters printed. Failure returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters) {
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (filename == NULL)

	{
		return (0);
	}

fd = open(filename, O_RDONLY);
	if (fd == -1)

	{
		return (0);
	}

buf = (char *) malloc(sizeof(char) * letters);
	if (buf == NULL)

	{
		return (0);
	}

nrd = read(fd, buf, letters);
	if (nrd == -1)

	{
		free(buf);
		close(fd);
		return (0);
	}

nwr = write(STDOUT_FILENO, buf, nrd);
	if (nwr == -1)

	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (nwr);
}
