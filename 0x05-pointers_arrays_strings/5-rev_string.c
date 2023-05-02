#include <stdio.h>
#include "main.h"

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

/**
 * rev_string - reverses the string;
 * @s: pointer argument
 * Return: n/a
 */
void rev_string(char *s)
{
	int len = _strlen(s) - 1, i = 0;

	while (i <= (len / 2))
	{
		int t;

		t = s[i];
		s[i] = s[len];
		s[len] = t;
		len--;
		i++;
	}
}
