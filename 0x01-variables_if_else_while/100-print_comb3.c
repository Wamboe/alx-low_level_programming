#include <stdio.h>

/**
 * main - prints letter of the alphabet
 *
 * Return: always 0 for success
 */
int main(void)
{
	int n, m;

	n = 0;

	while (n <= 9)
	{
		m = n + 1;
		while (m <= 9)
		{
			putchar(n + '0');
			putchar(m + '0');
			m++;
			if( n != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
}

