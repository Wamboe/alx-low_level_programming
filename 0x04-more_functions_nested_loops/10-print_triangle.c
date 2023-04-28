#include "main.h"

/**
 * print_triangle - draws line
 * @size: size of line
 * Return: n/a
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
	{
		while (size != 0)
		{
			for (i = size; i > 0; --i)
			{
				_putchar(' ');
			}
			for (j = 0; j < size ; ++j)
			{
				_putchar('#');
			}
			_putchar('\n');
			size--;
		}
	}
}
