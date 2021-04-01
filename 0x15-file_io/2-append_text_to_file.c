#include "holberton.h"

/**
 * append_text_to_file - function to append text at the end of a file
 * @filename: file name
 * @text_content: text content to be appended into the file
 * Return: 1 if succeeded or 0 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wri, i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
