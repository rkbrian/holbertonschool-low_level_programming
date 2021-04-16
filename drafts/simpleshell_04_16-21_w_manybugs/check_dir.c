#include "shell.h"

/**
 * check_dir - function to check directory path
 * @argv: argument array
 * @command_array: input command
 * Return: NULL
 */
char *check_dir(char **command_array, char **argv)
{
	char **dir_tokens = NULL;
	char *env_path = NULL;
	char *matched = NULL;
	struct stat check;
	int i = 0;

	env_path = _getenv("PATH");
	dir_tokens = dir_tokenize(env_path);

	while (dir_tokens[i])
	{
		dir_tokens[i] = cmd_to_path(dir_tokens[i], command_array[0]);

		if (stat(dir_tokens[i], &check) == 0)
		{
			free(command_array[0]);
			matched = _strdup(dir_tokens[i]);
			for (; dir_tokens[i] != NULL; i++)
				free(dir_tokens[i]);
			free(dir_tokens);
			return (matched);
		}
		free(dir_tokens[i]);
		i++;
	}
	free(dir_tokens);
	no_file(command_array[0], argv);

	return (command_array[0]);
}
