#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head node
 * Return: count
*/
size_t list_len(const list_t *h);
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] (%s)\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
