#include "lists.h"

/**
 * add_node - add an item at the beginning of ll
 * @head: current head
 * @str: member of list_t
 * Return: address of first element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *firstNode;

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
	firstNode->next = *head;

	*head = firstNode;
	return (firstNode);
}
