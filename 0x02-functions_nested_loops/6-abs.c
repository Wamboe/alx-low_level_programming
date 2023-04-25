#include "main.h"

/**
 * _abs - fetching absolute of a number
 *
 * @i: int that we are getting absolute for
 * Return: 0 if successful
 */

int _abs(int i)
{
	int remainder, z, reverse = 0, count = 0;

	if (i < 0)
	{
		i = i * -1;
	}

	while (i != 0)
	{
		remainder = i % 10;
		reverse = reverse * 10 + remainder;
		i = i / 10;
		count++;
	}

	while (count > 0)
	{
		z = reverse % 10;
		_putchar(z + '0');
		reverse = reverse / 10;
		count--;
	}

	return (0);
}
