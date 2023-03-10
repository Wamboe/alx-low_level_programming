#include "main.h"

/**
 * print_most_numbers - fxn that print some numbers
 *
 * Description: fxn that print 0-9 with exception of 2 and 4
 *
 * Return: no return values
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			++i;
			continue;
		}

		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
