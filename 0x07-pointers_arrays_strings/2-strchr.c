#include <stddef.h>

/**
 * *_strchr - fxn that fills memory with a constant byte
 * @s: array being searched
 * @c: char being searched
 * Return: a pointer location of c or null if not found
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*(p) != '\0')
	{
		if (*(p) == c)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
