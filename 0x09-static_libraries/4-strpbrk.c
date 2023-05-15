#include <stddef.h>
/**
 * *_strpbrk - fxn that searches a string for any of a set of bytes
 * @s: array that is searched
 * @accept: array used for searching
 * Return: a pointer to the the first occurence of char in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s, *q;

	while (*(p) != '\0')
	{
		q =  accept;
		while (*(q) != '\0')
		{
			if (*(p) == *(q))
				return (p);
			q++;
		}
		p++;
	}

	return (NULL);
}
