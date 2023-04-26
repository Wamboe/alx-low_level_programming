#include "main.h"

/**
 * times_table - 9 times tables
 *
 * Return: nil
 */
void times_table(void)
{
	int i, j, k, remainder, reverse = 0, l, count = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if ((j > 0) && (j <= 9))
			{
				_putchar(',');
				_putchar(' ');
			}

			if ((k / 10) != 0)
			{
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
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
