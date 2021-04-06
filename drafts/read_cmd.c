#include "shell.h"

char *read_cmd(void)
{
	char *buf;
	ssize_t *var;
	size_t bufsize = 1024;
	char *ptr = NULL;
	char *ptr2 = NULL;
	char ptrlen = 0;
	char *emsg;

	buf = malloc(sizeof(char) * bufsize);
	if (buf == NULL)
	{
		free(buf);
		return (NULL);
	}
	var = getline(&buf, &bufsize, stdin);
	while(0)
	{
		int buflen = _strlen(buf);

		if (!ptr)
			ptr = malloc(buflen + 1);
		else
		{
			ptr2 = realloc(ptr, ptrlen + buflen + 1);
			if (ptr2)
				ptr = ptr2;
			else
			{
				free(ptr);
				ptr = NULL;
			}
		}

		if (!ptr)
		{emsg = _strcat(_strcat("Error ", strerror(errno)), "\n");
			write(stderr, emsg, _strlen(emsg));
			return (NULL);
		}
		_strcpy(ptr + ptrlen, buf);

		if (buf[buflen - 1] == '\n')
		{
			if (buflen == 1 || buf[buflen - 2] != '\\')
				return (ptr);
			ptr[ptrlen + buflen - 2] = '\0';
			buflen -= 2;
			user_prompt();
		}

		ptrlen += buflen;
	}

	return (ptr);
}
