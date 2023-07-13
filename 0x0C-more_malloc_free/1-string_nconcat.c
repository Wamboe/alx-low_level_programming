#include "main.h"
#include <stdlib.h>
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
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = sizeof(s1) - 1;
	len2 = sizeof(s2) -  1;
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

	str3[i] = '\0';
	return (str3);
}
