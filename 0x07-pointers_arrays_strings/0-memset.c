/**
 * *_memset - fxn that fills memory with a constant byte
 * @s: position of an array where we start
 * @b: char that replaces
 * @n: number of array items to be replaced
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		*(s) = b;
		s++;
		n--;
	}
	return (s);
}
