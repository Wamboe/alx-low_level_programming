#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Function that produces random numbers
 *
 * @i: integer being tested
 * Return: nil as fxn is void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
