#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
	for (nletters = 0; text_content[nletters] != '\0'; nletters++)
	;

	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);

	return (1);
}

