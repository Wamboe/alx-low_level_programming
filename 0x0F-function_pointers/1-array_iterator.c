#include "function_pointers.h"

/**
 * array_iterator - itarates over a given array
 * @array: array to be iterated
 * @size: size of array
 * @action: function to be applied on array
 * Return: n/a
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	for (; x < size; x++)
		action(array[x]);
}
