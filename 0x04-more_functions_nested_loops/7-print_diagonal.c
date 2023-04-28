#include "main.h"

/**
 * print_diagonal - draws line
 * @n: size of line
 * Return: n/a
 */
void print_diagonal(int n)
{
	int j = 0;

	while (n > 0)
	{
		_putchar('\\');
		if (n > 1)
		{
			int i;

			j++;
			_putchar('\n');
			for (i = 0; i <= j; i++)
			{
				_putchar(' ');
			}
		}
		n--;
	}
	_putchar('\n');
}
