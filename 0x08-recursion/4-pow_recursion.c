#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 * Return: n/a
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x *_pow_recursion(x, (y - 1)));
}
