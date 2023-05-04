#include <string.h>
#include "main.h"

/**
 * *_strncat - concats two strings based on length n
 * @dest: initial string
 * @src: string to be concated
 * @n: lenth of src to be concatenated
 * Return: concated sting
 **/
char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;
	int j, k = 0;

	while (*i != '\0')
	{
		i++;
	}

	k = strlen(src);

	if (n > k)
		n = k;

	for (j = 0; j < n; j++)
	{
		*i = src[j];
		i++;
	}
	*i = '\0';

	return (dest);
}
