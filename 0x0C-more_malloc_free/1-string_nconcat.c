#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: lensth of string 2 to be copied
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, lenS2 = strlen(s2) + 1;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	if (n >= lenS2)
		n = lenS2;

	c = malloc((lenS2 + n + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		c[i] = s1[i];
	strncat(c, s2, n);
	return (c);
}
