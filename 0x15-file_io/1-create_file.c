#include "main.h"

/**
 * create_file - create a file with read write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int rstat;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (rwr = 0; text_content[rwr] != '\0'; rwr++)
			;
		rstat = write(fd, text_content, rwr);
		if (rstat == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
