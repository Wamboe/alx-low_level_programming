#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints multiplication of 2 numbers
 * @argc: number of arguments
 * @argv: argument passed while on cmd
 * Return: 0 when successful and 1 when false
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, x;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			x = atoi(argv[i]);
/*			printf("%d\n", x);*/
			sum = sum + x;
		}
		printf("%d\n", sum);
	}
	return (0);
}
