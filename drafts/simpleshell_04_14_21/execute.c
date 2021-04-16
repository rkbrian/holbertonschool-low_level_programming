#include "shell.h"

/**
 * execute - function to execute input command
 * @command_array: input command
 * @buffer: buffer allocated for input command
 * @argv: argument array
 */

void execute(char **command_array, char *buffer, char **argv)
{
	pid_t pid;
	char *path_command = NULL;
	struct stat fstat;
	int status;

	pid = fork();
	if (pid == -1)
		perror("Error\n");

	if (pid == 0)
	{
		if (!command_array)
			free(buffer);
		if (stat(command_array[0], &fstat) == 0)
			execve(command_array[0], command_array, NULL);
		_getoutof(command_array, buffer);
		if (_strcmp(command_array[0], "cd") == 0)
			chdir(command_array[1]);
		else
		{
			path_command = check_dir(command_array, argv);
			execve(path_command, command_array, NULL);
		}
	}
	else
	{
		wait(&status);
		_getoutof(command_array, buffer);
		free(buffer);
	}
}
