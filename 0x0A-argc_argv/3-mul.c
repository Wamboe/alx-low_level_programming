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
	int sum = 1, i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
