#include <stdio.h>

/**
 * _strlen - get size of a string;
 * @s: string being measured
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0, c = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	return (c);
}
