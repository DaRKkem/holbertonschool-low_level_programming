#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the first node of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	char *copy;
	unsigned int i = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
		return (NULL);

	while (copy[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(copy);
		return (NULL);
	}

	new_node->str = copy;
	new_node->len = i;
	new_node->next = NULL;

	/* Cas : liste vide */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Sinon, parcourir jusqu'au dernier élément */
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
