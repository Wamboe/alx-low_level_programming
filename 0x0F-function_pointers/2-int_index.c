/**
 * int_index - searches for an integer
 * @size: size of array
 * @array: array of int
 * @cmp: fxn that action search for int
 * Return: index of array if success else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;
	int (*p)(int) = cmp;

	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		j = p(array[i]);
		if (j == 1)
			return (i);
		i++;
	}
	return (-1);
}
