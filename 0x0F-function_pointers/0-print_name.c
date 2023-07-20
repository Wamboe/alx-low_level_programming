#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name passed to parameter
 * @name: name to be printed
 * @f: function to print name
 * Return: n/a
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
