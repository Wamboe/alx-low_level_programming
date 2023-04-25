#include "main.h"

/***/
int print_last_digit(int i)
{
	int r;

	if (i < 0)
	{
		i = i * -1;
	}

	r = i % 10;
	_putchar(r+'0');

	return (r);
}
