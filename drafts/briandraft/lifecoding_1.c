#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define STDOUT STDOUT_FILENO

void tokenize(char *line)
{
	char *token = NULL;
	int index = 0;
	token = strtok(line, " ");
	while (token)
	{
		printf("token[%i] ----> %s\n", index, token);
		token = strtok(NULL, " ");
		index++;
	}
	index = 0;
}

int line_lenght(char *string)
{
	int i = 0;
	while (string[i])
		i++;
	return i;
}

int main()
{
	char *line = NULL, *prompt = "$ |";
	size_t line_size = 0;
	int chars_read = 0;
	while (1)
	{
		write(STDOUT, prompt, line_lenght(prompt));
		chars_read = getline(&line, &line_size, stdin);
		write(STDOUT, line, chars_read);
		tokenize(line);
	}
	return 0;
}
