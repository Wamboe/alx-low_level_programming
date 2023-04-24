#include <stdio.h>

/**
 * main - prints letter of the alphabet
 *
 * Return: always 0 for success
 */
int main(void)
{
	char c[] = "alphabet_";
	int i = sizeof(c);

	do
	{
		--i;
		putchar(c[i]);
	}
	while(i > 0);
	putchar('\n');

	return (0);
}

