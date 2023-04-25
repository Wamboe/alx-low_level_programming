#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: n/a
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
