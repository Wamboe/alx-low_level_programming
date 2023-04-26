#include "main.h"

/**
 * jack_bauer - fxn that prints 24 hrs
 *
 * Return: nil
 */
void jack_bauer(void)
{
	int j, i, n, m;

	for (n = 0; n <= 2; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (j = 0; j <= 6; j++)
			{
				for (i = 0; i <= 9; i++)
				{
					if ((n == 2 && m > 3) || (j == 6 && i > 0))
					{
						break;
					}

					_putchar(n + '0');
					_putchar(m + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar('\n');
				}
			}
		}
	}
}
