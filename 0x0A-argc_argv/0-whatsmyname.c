#include "main.h"

/**
 * main - prints the name of a fxn
 * @argc: number of arguments
 * @argv: argument passed while on cmd
 * Return: 0 when successful and 1 when false
 */
int main(int argc, char *argv[])
{
	char *c = argv[0];
	(void)argc;
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
