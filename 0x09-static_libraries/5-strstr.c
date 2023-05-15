#include <stddef.h>
/**
 * *_strpbrk - fxn that searches a string for any of a set of bytes
 * @s: array that is searched
 * @accept: array used for searching
 * Return: a pointer to the the first occurence of char in accept
 */
char *_strstr(char *haystack, char *needle)
{
	char *p, *q;
	for (p = haystack; *p; p++)
	{
		for (q = needle; *p && *q && (*p == *q); p++, q++);
		if (!*q)
			return (haystack);
	}
	return (NULL);
}
