#include "lists.h"

void free_list(list_t *head);

/**
 * add_node_end - adds a node at the end
 * @head: linked list beginning
 * @str: string member
 * Return: last node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *firstNode = NULL, *current = NULL;

	if (str == NULL)
		return (NULL);

	firstNode = malloc(sizeof(list_t));
	if (firstNode == NULL)
		return (NULL);

	firstNode->str = strdup(str);
	if (firstNode->str == NULL)
	{
		free(firstNode);
		return (NULL);
	}

	firstNode->len = strlen(str);
	firstNode->next = NULL;

	if (*head == NULL)
		*head = firstNode;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = firstNode;
	}
	return (firstNode);
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
