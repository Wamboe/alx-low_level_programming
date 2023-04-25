#include "main.h"

/**
 * print_last_digit - fetcjing the last digit
 *
 * @i: int being checked
 * Return: the last digit of a number
 */
int print_last_digit(int i)
{
	int r;

	if (i < 0)
	{
		i = i * -1;
	}

	r = i % 10;
	_putchar(r + '0');

	return (r);
}
