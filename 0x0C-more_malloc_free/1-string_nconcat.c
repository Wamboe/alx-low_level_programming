#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of s2 to concatenate
 * Return: concatenated string
 * 1&1=1 1|1=1
 * 1&0=0 1|0=1
 * 0&1=0 0|1=1
 * 0&0=0 0|0=0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str3;
	int i = 0, len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s2 != '\0')
	{
		if (n == 0)
			break;
		len++;
		n--;
	}

	str3 = malloc((len + 1) * sizeof(char));
	if (str3 == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		str3[i] = *s1;
		i++;
		s1++;
	}
	while (i < len)
	{
		str3[i] = *s2;
		i++;
		s2++;
	}

	str3[i] = '\0';
	return (str3);
}
