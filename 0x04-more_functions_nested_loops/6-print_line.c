#include "main.h"

/**
 * print_line - draws line
 * @n: size of line
 * Return: n/a 
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

}
