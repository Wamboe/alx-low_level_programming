#include <stddef.h>

/**
 * *_strchr - fxn that fills memory with a constant byte
 * @s: array being searched
 * @c: char being searched
 * Return: a pointer location of c or null if not found
 */
char *_strchr(char *s, char c)
{
	while (*(s) != '\0')
	{
		if (*(s) == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (s);
}
