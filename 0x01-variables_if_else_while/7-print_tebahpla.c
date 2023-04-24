#include <stdio.h>

/**
 * main - prints letter of the alphabet
 *
 * Return: always 0 for success
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
