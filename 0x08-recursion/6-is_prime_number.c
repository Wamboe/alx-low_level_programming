#include <stdlib.h>
#include "main.h"

/**
 * is_prime_number - prints a string
 * @n: number to be checked
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	int r2, r3, r5, r7;

	r2 = n % 2;
	r3 = n % 3;
	r5 = n % 5;
	r7 = n % 7;

	if (r2 == 0 || r3 == 0 || r5 == 0 || r7 == 0)
		return (0);
	if (n <= 0 || n == 1)
		return (0);
	return (1);
}
