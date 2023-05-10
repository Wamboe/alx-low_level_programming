#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints a string
 * @s: string to be printed
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1+_strlen_recursion(s));
}
