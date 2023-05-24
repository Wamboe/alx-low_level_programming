#include <stddef.h>

/**
 * array_iterator - exec a func given as a param on each array element
 * @array: array to be utilized
 * @size: size of array
 * @action: action to be carried
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*p)(int) = action;
	size_t i = 0;

	while (i < size)
	{
		p(array[i]);
		i++;
	}
}
