#include <stdio.h>

/**
 * main - prints letter of the alphabet
 *
 * Return: always 0 for success
 */
int main(void)
{
	int n, m, k;

	n = 0;

	while (n <= 9)
	{
		m = n + 1;
		while (m <= 9)
		{
			k = m + 1;
			while (k <= 9)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(k + '0');
				k++;
				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}

			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);

}

