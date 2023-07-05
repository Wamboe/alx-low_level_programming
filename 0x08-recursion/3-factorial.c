#include "main.h"

/**
 * factorial - get factorial of n
 * @n: int to be factorial
 * Return: if n < 0, -1, n = 0, 1, n!
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
