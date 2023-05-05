#include <string.h>
#include "main.h"

/**
 * _strcmp - concats two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: concated sting
 **/
int _strcmp(char *s1, char *s2)
{
	int i, r, z = strlen(s1);

	for (i = 0; i < z; i++)
	{
		if (s1[i] == s2[i])
		{
			r = 0;
		}
		else
		{
			int a = s1[i];
			int b = s2[i];

			r = a - b;
			break;
		}
	}
	return (r);
}

