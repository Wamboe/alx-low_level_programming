#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of a multidimentional array
 * @a: multidemntional array
 * @size: size of an array
 * Return: n/a
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, s = size, j = 0;

	while (i <= (size * size))
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	printf("%d, ", sum);

	sum = 0;
	while (s > 0)
	{
		j = j + (size - 1);
		sum = sum + a[j];
		s--;
	}
	printf("%d\n", sum);
}
