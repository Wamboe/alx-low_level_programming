#include <stdio.h>

/**
 * swap_int - swaps 2 numbers;
 * @a: pointer to 1st num
 * @b: pointer to 2nd num
 * Return: n/a
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
