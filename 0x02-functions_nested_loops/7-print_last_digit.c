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

	r = i % 10;
	if (r < 0)
	{
		r = r * -1;
	}

	_putchar(r + '0');

	return (r);
}
