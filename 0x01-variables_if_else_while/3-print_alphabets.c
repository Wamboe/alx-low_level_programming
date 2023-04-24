#include <stdio.h>

/**
 * main - prints letter of the alphabet
 *
 * Return: always 0 for success
 */
int main(void)
{
	char letterS = 'a';
	char letterB = 'A';

	while (letterS <= 'z')
	{
		putchar(letterS);
		letterS++;
	}
	while (letterB <= 'Z')
	{
		putchar(letterB);
		letterB++;
	}
	putchar('\n');

	return (0);
}

