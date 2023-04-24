#include <stdio.h>

/**
 * main - prints numbers of hexadecimal
 *
 * Return: always 0 for success
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}

