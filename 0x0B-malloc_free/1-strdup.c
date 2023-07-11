#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copys a string to another
 * @str: string to be copied
 * Return: string copied or null
*/
char *_strdup(char *str)
{
	char *ch;
	int len = sizeof(str), i = 0;

	if (len == 1)
	{
		return (NULL);
	}

	ch = malloc(len);
	if (ch == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		ch[i] = str[i];
		i++;
	}

	ch[i] = '\0';
	return (ch);
	free(ch);
}
