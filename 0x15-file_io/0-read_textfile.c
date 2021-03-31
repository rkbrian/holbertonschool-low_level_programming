#include "holberton.h"

/**
 * read_textfile - function to read text file and print it to the POSIX stdout
 * @filename: file name
 * @letters: allowable count of letters
 * Return: length of file text or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, len, wri;
	char *buffalo;

	if (filename == NULL)
	{
		return (0);
	}
	buffalo = malloc(sizeof(char) * letters + 1);
	if (buffalo == NULL)
	{
		free(buffalo);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffalo);
		return (0);
	}
	len = read(fd, buffalo, letters);
	if (len == -1)
	{
		free(buffalo);
		close(fd);
		return (0);
	}
	wri = write(STDOUT_FILENO, buffalo, len);
	if (wri == -1)
	{
		free(buffalo);
		close(fd);
		return (0);
	}
	free(buffalo);
	close(fd);
	return (len);
}
