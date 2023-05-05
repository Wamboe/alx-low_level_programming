#include "main.h"
#include <stdio.h>

/**
 * *reverse_array - prints numbers in reverser
 * @a: initial string
 * @n: s concated
 * Return: concated sting
 **/
void reverse_array(int *a, int n)
{
	int i = 0;

	n = n - 1;
	n = n / 2;

	while (i <= n)
	{
		int t;

		t = a[n];
		a[n] = a[i];
		a[i] = t;
		n--;
		i++;
	}
}
