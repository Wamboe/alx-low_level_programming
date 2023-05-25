#include <stdarg.h>
#include <stdio.h>
#define NIL "(nil)"

/**
 * print_numbers - prints numbers
 * @separator: delimiter
 * @n: len of arg to be printed
 * Return: n/a
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 3, m;

	va_start(p, n);
	m = n + i;
	for (; i < m ; i++)
	{
		printf("%d", va_arg(p, unsigned int));
		if (i != m - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
