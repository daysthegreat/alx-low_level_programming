#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters
 * Return: numbers of letters printed. Failure returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
	return (0);
	}
FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
char *buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read < 0 || ferror(file))
	{
		free(buffer);
		fclose(file);
		return (0);
	}
buffer[bytes_read] = '\0';
ssize_t bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		free(buffer);
		fclose(file);
	return (0);
	}
	free(buffer);
	fclose(file);
	return (bytes_written);
}
