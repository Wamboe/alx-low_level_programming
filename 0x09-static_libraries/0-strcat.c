#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concats two strings
 * @dest: initial string
 * @src: string to be concated
 * Return: concated sting
 **/
char *_strcat(char *dest, char *src)
{
	char *i = dest;
	int j;

	while (*i != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		*i = src[j];
		i++;
	}
	*i = '\0';

	return (dest);
}
