#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'printing single digit numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	char c = 'a';

	for (; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
