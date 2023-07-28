#include "lists.h"

void free_list(list_t *head)

/**
 * add_node_end - adds a node at the end
 * @head: linked list beginning
 * @str: string member
 * Return: last node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL, *current = NULL;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}

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
