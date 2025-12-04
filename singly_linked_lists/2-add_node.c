#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the first node of the list
 * @str: the string to duplicate and store in the new node
 *
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(copy);
		return (NULL);
	}

	while (copy[i])
		i++;

	new_node->str = copy;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
