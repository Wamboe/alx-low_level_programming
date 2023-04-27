#include "main.h"

/**
 * _isdigit - checks if argument is a digit
 * @c: int being checked
 * Return: 1 if upper else lower
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
