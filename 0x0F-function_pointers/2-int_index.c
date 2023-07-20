#include "function_pointers.h"

/**
 * int_index - returns index fof int being searched for
 * @array: array of integers
 * @size: size of the array
 * @cmp: fxn to apply to array
 * Return: index of int or -1 if index not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0, rslt = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for ( ; x < size; x++)
	{
		rslt = cmp(array[x]);
		if (rslt == 1)
			break;
	}

	if (x == size && rslt == 0)
		return (-1);

	return (x);
}
