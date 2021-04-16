#include "shell.h"
/**
 * main - main function of shell program
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	char *buffer;
	char **command_array;
	size_t size;
	ssize_t line_size;

	buffer = NULL;
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
	signal(SIGINT, handle_ctrl_c);
	while ((line_size = getline(&buffer, &size, stdin)) < 1024)
	{
		if (line_size == EOF)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		command_array = tokenize(buffer);
		execute(command_array, buffer, argv);
		size = 0;
		buffer = NULL;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
	}
	free_token(command_array);
	free(buffer);
	exit(0);
}
