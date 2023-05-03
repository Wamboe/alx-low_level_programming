#include <stdio.h>
#include "main.h"

/**
 * print_array - prints every other char in a string;
 * @a: array to be printed
 * @n: no. of array items to be printed
 * Return: n/a
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		printf("%d", *(a + i));
		if (i + 1 != n)
			printf(", ");
		i++;
	}
	_putchar('\n');
}
