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
 * puts_half - sets vars to 98;
 * @str: pointer argument
 * Return: n/a
 */
void puts_half(char *str)
{
	int len = _strlen(str) - 1;

	if (len % 2 != 0)
		len = (len - 1) / 2;
	else
		len = len / 2;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
