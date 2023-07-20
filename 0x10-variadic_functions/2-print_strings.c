#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - function that prints strings
 * @separator: delimiter
 * @n: count of args
 * Return: n/a
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	while (i < n)
	{
		printf("%s", va_arg(ap, char *));
		if (i != n - 1)
			printf("%s", separator);
		else
			break;
		i++;
	}

	va_end(ap);
	putchar('\n');
}
