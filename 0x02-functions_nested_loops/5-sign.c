#include "main.h"

/**
 * print_sign - checks whether a character is lowercase
 *
 * @: character being checked
 * Return: 1 if i > 0 and 0 if not i == 0 and -1 if i < 0
 */
int print_sign(int n)
{
	int type;

	if (n > 1)
	{
		_putchar('+');
		type = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		type = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		type = -1;
	}

	return (type);
}
