#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: char to be duplicated
 * Return: new duplicated string
 */
char *_strdup(char *str)
{
	char *c;
	int len, i = 0;

	if (str == NULL)
		return (0);

	len = strlen(str);
	c = malloc(sizeof(char) * len);
	if (c == NULL)
		return (0);

	while (i < len)
	{
		c[i] = str[i];
		i++;
	}

	return (c);
}
