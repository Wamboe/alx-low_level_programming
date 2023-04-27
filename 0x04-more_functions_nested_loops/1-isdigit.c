#include "main.h"

/**
 * _isdigit - checks if char is upper
 * @c: character being checked
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
