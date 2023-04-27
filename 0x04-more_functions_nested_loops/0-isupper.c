#include "main.h"

/**
 * _isupper - checks if char is upper
 * @c: character being checked
 * Return: 1 if upper else lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
