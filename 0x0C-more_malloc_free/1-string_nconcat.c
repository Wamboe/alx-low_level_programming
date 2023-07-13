#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of s2 to concatenate
 * Return: concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str3;
	int i = 0, len1, len2, totalLen;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	if (n > sizeof(s2))
		n = len2;

	totalLen = len1 + n + 1;
	str3 = malloc(totalLen * sizeof(char));

	if (str3 == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		str3[i] = *s1;
		i++;
		s1++;
	}
	while (i < totalLen)
	{
		str3[i] = *s2;
		i++;
		s2++;
	}

	str3[totalLen] = '\0';
	return (str3);
}
