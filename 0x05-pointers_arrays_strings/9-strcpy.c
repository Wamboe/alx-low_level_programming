#include "main.h"

/**
 * *_strcpy - sets vars to 98;
 * @dest: pointer to buffer
 * @src: pointer to a string to be copied
 * Return: buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = i + 1;
	dest[i] = '\0';
	return (dest);
}
