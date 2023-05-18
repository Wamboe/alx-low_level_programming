#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	int len = 0, i, p = 0;
	char *c;

	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	c = malloc((len + 1) * sizeof(char *));
	if (c == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		strcpy(c + p, av[i]);
		p += strlen(av[i]);
	}
	return (c);
}

