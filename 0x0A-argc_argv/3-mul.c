#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - prints multiplication of 2 numbers
 * @argc: number of arguments
 * @argv: argument passed while on cmd
 * Return: 0 when successful and 1 when false
 */
int main(int argc, char *argv[])
{
	int sum = 1, i, len, div = 1, num;
	char c[] = "Error";

	if (argc < 3)
	{
		i = 0;
		while (*(c + i) != '\0')
		{
			_putchar(*(c + i));
			i++;
		}
		_putchar('\n');
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}

	len = sizeof(sum) / sizeof(int);

	while (len != 0)
	{
		while ((len) != 1)
		{
			div *= 10;
			len--;
		}

		num = (sum / div) % 10;
		_putchar(num + 48);
		len--;
	}

	return (0);
}
