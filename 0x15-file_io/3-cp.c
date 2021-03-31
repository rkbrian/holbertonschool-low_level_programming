#include "holberton.h"

/**
 * main - function to create a file
 * @argc: file name
 * @argv: text content for the fille
 * Return: 0 if succeeded or others if failed
 */
int main(int argc, char *argv[])
{
	int inputFd, outputFd;
	ssize_t numRead;
	char buffalo[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputFd = open(argv[1], O_RDONLY);
	if (inputFd == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	outputFd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (outputFd == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((numRead = read(inputFd, buffalo, BUF_SIZE)) > 0)
	{
		if (write(outputFd, buffalo, numRead) != numRead)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (numRead == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(inputFd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	if (close(outputFd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
