#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - returns a pointer to a newly allocated space in memory
 * @s1: 1st string
 * @s2: 2nd string
 * Return: new conatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0;

	c = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char));
	if (c == NULL)
		return (0);

	while (*s1 != '\0')
	{
		c[i] = *s1;
		s1++;
		i++;
	}
	
	while (*s2 != '\0')
	{
		c[i] = *s2;
		s2++;
		i++;
	}

	return (c);
}
