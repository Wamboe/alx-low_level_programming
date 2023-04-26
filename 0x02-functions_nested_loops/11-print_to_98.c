#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers
 *
 * @n: starting integer n
 * Return: nil as fcnt i
 */
void print_to_98(int n)
{
	int i = 98;

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

	}
	printf("%d\n", i);
}
