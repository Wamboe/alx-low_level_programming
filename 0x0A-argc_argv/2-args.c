#include "main.h"

/**
 * main - prints the name of a fxn
 * @argc: number of arguments
 * @argv: argument passed while on cmd
 * Return: 0 when successful and 1 when false
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i] != '\0')
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
		_putchar('\n');
	}
	return (0);
}
