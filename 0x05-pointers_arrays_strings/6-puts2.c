#include "main.h"


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

/**
 * puts2 - prints every other char in a string;
 * @str: pointer argument
 * Return: n/a
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int i = 0;

	while ((*(str + i) != '\0') && (i <= len))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
