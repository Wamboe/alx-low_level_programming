#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv)
{
	char c[] = {"+-/*%"};
	char *op, *a, *b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	
	while (*c != '\0')
	{
		if (argv[2] == *c)
			if ((*c == '/' || c == '%') && atoi(argv[3]) == 0)
			{
				 printf("Error\n");
				 return (100);
			}
		else
		{
			printf("Error\n");
			return (99);
		}
	}

	op = malloc(sizeof(op_t.op) + 1);
	a = malloc(sizeof(int) * strlen(argv[1]);
	b = malloc(sizeof(int) * strlen(argv[3]));
	a[0] = (argv[1];
	op[0] = argv[2];
	b[0] = (argv[1];

	result = get_op_func(op))(atoi(a), atoi(b));
	printf("%d\n", result);
	return (0);
}
