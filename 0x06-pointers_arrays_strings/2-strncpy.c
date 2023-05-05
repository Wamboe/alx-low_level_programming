#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copys a string to anpther on length n
 * @dest: initial string
 * @src: string to be concated
 * @n: lenth of src to be concatenated
 * Return: concated sting
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
