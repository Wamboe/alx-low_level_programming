#include "main.h"

/**
 * print_square - draws a square
 * @size: size of square
 * Return: n/a
 */
void print_square(int size)
{
	int j = size;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; size > 0; size--)
		{
			int i = j;

			for (; i > 0; i--)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
