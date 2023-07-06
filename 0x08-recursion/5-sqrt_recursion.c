#include "main.h"

/**
 * _sqrt_recursion - get squareroot of a number
 * @n: number to get sqrt
 * Return: -1 if not nutaral else sqrt
*/
int _sqrt_recursion(int n)
{
	double i = 0;
	double j = n / 2;

	while (j != i)
	{
		i = j;
		j = (n / i + i) / 2;
	}
	if (j == 0)
	return (-1);

	return (j);
}
