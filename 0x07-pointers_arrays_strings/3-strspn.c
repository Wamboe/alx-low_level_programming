#include <stddef.h>
#include <stdio.h>

/**
 * _strspn - fxn that gets the length of a prefix substring
 * @s: array where we seach for a string
 * @accept: char that we are looking for
 * Return: a pointer to the memory area s
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s, *q;
	int c = 0;

	while (*(p) != '\0')
	{
		q =  accept;
		while (*(q) != '\0')
		{
			if (*(p) == *(q))
			{
				c++;
				break;
			}
			q++;
		}
		if (*(q) == '\0')
			break;
		p++;
	}
	return (c);
}
