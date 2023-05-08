/**
 * *_memcpy - fxn that copies memory area
 * @dest: position of an array where we start
 * @src: char that replaces
 * @n: number of array items to be replaced
 * Return: a pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n != 0)
	{
		*(p) = *(src);
		p++;
		src++;
		n--;
	}
	return (dest);
}
