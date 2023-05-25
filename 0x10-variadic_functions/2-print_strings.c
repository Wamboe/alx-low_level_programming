#include <stdarg.h>
#include <stdio.h>
#define NIL "(nil)"

/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: len of arg to be printed
 * Return: n/a
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 3, m;

	va_start(p, n);
	m = n + i;
	for (; i < m ; i++)
	{
		const char *str = va_arg(p, const char *);

		if (*str == '\0')
			printf("%s", NIL);
		else
			printf("%s", str);
		if (i != m - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
