#include "holberton.h"

/**
 * create_file - function to create a file
 * @filename: file name
 * @text_content: text content for the fille
 * Return: 1 if succeeded or 0 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	dprintf(fd, "%s", text_content);
	close(fd);
	return (1);
}
