#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the linked list
 * @index: index of the node to return (starting from 0)
 *
 * Return: pointer to the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copyt;
	unsigned int i = 0;

	copyt = head;

	while (copyt != NULL)
	{
		if (i == index)
		{
			return (copyt);
		}
		i++;
		copyt = copyt->next;
	}

	return (NULL);
}
