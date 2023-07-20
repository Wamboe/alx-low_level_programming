#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: delimiter
 * @n: count of args
 * Return: n/a
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, unsigned int));
		printf("%s", separator);
		i++;
	}

	va_end(ap);
	putchar('\n');
}
