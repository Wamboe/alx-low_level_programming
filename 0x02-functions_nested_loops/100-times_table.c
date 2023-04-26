#include <stdlib.h>
#include "main.h"

void print_delimiters(int, int);

/**
 * times_table - 9 times tables
 *
 * Return: nil
 */
void print_times_table(int n)
{
	int i, j, k, remainder, reverse = 0, l, count = 0;

	if (n < 0 && n > 15)
		exit (0);

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if ((k / 10) != 0)
			{
				print_delimiters(j, n);
				while (k != 0)
				{
					remainder = k % 10;
					reverse = reverse * 10 + remainder;
					k = k / 10;
					count++;
				}
				while (count != 0)
				{
					l = reverse % 10;
					_putchar(l + '0');
					reverse = reverse / 10;
					count--;
				}
			}
			else
			{
				print_delimiters(j, n);
				if (j > 0 && j <= n)
				{
					_putchar(' ');
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}

/**
 * print_delimiters - prints ", "
 *
 * @j: int being checked
 * Return: nil
 */
void print_delimiters(int j, int n)
{
	if (j > 0 && j <= n)
	{
		_putchar(',');
		_putchar(' ');
	}
}
