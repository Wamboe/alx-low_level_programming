#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: number of rows in a multidimentional array
 * Return: n/a
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, len = size * size, s = size, count = 1;

	while (i <= len)
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	printf("_____");
	printf("%d\n", sum);

	i = len - size - 1;
	size = size;
	sum = 0;
	while (count <= s)
	{
		printf("a[%d]:%d\n",i, a[i]);
		sum = sum + a[i];
		i = i + size;
		count++;
		
	}
	printf("_____");
	printf("%d\n", sum);

}
