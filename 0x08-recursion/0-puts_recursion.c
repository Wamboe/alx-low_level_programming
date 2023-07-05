#include "main.h"

/**
* _puts_recursion - prints a string recussively
* @s: string to be printed
* Return: N/A
*/
void _puts_recursion(char *s)
{
	char x = *s;

	if (x == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(x);
	s++;
	_puts_recursion(s);
}
