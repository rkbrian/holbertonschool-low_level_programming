#include "holberton.h"

/**
 * create_file - function to create a file
 * @filename: file name
 * @text_content: text content for the fille
 * Return: 1 if succeeded or 0 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, len, wri;
	char *buffalo;

	if (filename == NULL)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	buffalo = malloc(sizeof(char) * i + 1);
	if (buffalo == NULL)
	{
		free(buffalo);
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		free(buffalo);
		return (-1);
	}
	if (text_content == NULL)
	{
		free(buffalo);
		close(fd);
		return (1);
	}
	len = read(fd, buffalo, i);
	if (len == -1)
	{
		free(buffalo);
		close(fd);
		return (-1);
	}
	wri = write(STDOUT_FILENO, buffalo, len);
	if (wri == -1)
	{
		free(buffalo);
		close(fd);
		return (-1);
	}
	dprintf(fd, "%s", text_content);
	free(buffalo);
	close(fd);
	return (1);
}
