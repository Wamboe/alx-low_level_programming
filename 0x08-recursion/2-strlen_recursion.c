#include "main.h"

/**
* _strlen_recursion - gets length recussively
* @s: string to be printed
* Return: N/A
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
