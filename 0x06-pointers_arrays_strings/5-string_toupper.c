#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - concats two strings
 * @c: string to be converted
 * Return: concated sting
 **/

char *string_toupper(char *c)
{
	while (*c != '\0')
	{	
		if (*c >= 'a' && *c <= 'b')
		{
			int i = *c;
			i = i + 32;
		}
		c++;
	}
	return (0);
}
