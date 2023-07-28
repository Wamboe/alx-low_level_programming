#include "lists.h"

/**
 * free_list - frees malloc
 * @head: linked list
 * Return: n/a
*/
void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
