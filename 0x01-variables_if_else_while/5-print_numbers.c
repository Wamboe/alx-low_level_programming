#include <stdio.h>

/**
 * main - prints letter of the alphabet
 *
 * Return: always 0 for success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}

