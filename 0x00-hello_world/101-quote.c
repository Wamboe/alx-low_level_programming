#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int n = 0;

	while (c[n] != '\0')
	{
		putchar(c[n]);
		n = n + 1;
	}
	putchar('\n');
	return (1);
}
