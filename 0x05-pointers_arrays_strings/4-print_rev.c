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
 * print_rev - prints string in reverse;
 * @s: pointer argument
 * Return: n/a
 */
void print_rev(char *s)
{
	int len = _strlen(s) - 1;
/*
*	printf("len: %d\n", len);
*	printf("s[len]: %c\n", s[len - 1]);
*	printf("s[0]: %c\n", s[0]);
*/
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
