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

	/*access(_genenv(), R_OK)*/
	pid = fork();
	if (pid == -1)
	{
		perror("Error\n");
		exit(EXIT_FAILURE);
	}

	if (pid == 0)
	{
		if (!command_array)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		if (stat(command_array[0], &fstat) == 0)
			execve(command_array[0], command_array, NULL);
		check_builtins(command_array, buffer);
		if ((path_command = check_dir(command_array, argv)) != NULL)
			execve(path_command, command_array, NULL);
	}
	else
	{
		wait(&status);
		if (_strcmp(command_array[0], "exit") == 0)
			_getoutof(command_array, buffer);
		free(buffer);
	}
}

/**
 * changedir - function to change directory and env variable
 * @command_array: input command
 * @buffer: buffer allocated for input command
 */
void changedir(char **command_array, char *buffer)
{
	char *dirbuf;

	dirbuf = malloc(sizeof(char) * 1024);
	if (dirbuf == NULL)
	{
		free(dirbuf);
		perror("Error\n");
	}
	if ((!command_array[1]) || command_array[1] = '-' || /
command_array[1] = '$HOME')
	{
		chdir(_getenv("HOME"));
		getcwd(dirbuf, _strlen(_getenv("HOME")));
	}
	else if (!command_array[2])
	{
		chdir(_getenv(command_array[1]));
		getcwd(dirbuf, _strlen(_getenv(command_array[1])));
	}
	else
		perror("getcwd");
	free(dirbuf);
}
