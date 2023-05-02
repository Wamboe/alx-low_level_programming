#include "main.h"

/**
 * puts2 - sets vars to 98;
 * @str: pointer argument
 * Return: n/a
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
