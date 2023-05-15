#include "main.h"

/**
 * _abs - fetching absolute of a number
 *
 * @i: int that we are getting absolute for
 * Return: 0 if successful
 */

int _abs(int i)
{

	if (i < 0)
	{
		i = i * -1;
	}

	return (i);
}
