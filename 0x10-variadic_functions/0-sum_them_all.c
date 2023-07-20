#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(s, n);

	for (i = 1; i <= n; i++)
		sum = sum + va_arg(s, unsigned int);

	va_end(s);
	return (sum);
}
