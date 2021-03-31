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
	ssize_t wri, i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	wri = write(fd, text_content, i);
	if (wri == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
