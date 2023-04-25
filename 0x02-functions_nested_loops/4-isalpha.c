#include "main.h"

/**
 * _isalpha - checks whether a character is lowercase
 *
 * @c: character being checked
 * Return: 1 if it is successful and 0 if not
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
