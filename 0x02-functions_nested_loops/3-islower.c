#include "main.h"

/**
 * _islower - checks whether a character is lowercase
 *
 * @c: character being checked
 * Return; 1 if it is successful and 0 if not
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
