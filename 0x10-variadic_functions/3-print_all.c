#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints all data
 * @format: formats to be printed
 * Return: n/a
*/
void print_all(const char * const format, ...)
{
	va_list s;
	unsigned long i = 0;
	char *st;

	va_start(s, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
			printf("%c", va_arg(s, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(s, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(s, double));
		else if (format[i] == 's')
		{
			st = va_arg(s, char *);
			if (st == NULL)
				printf("(nil)");
			else
				printf("%s", st);
		}
		while (i != (strlen(format) - 1))
		{
			printf(", ");
			break;
		}
		i++;
	}

	va_end(s);
	putchar('\n');
}
