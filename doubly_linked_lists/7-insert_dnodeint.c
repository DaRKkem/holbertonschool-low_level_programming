#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer head of the doubly linked list
 * @idx: index where the new node should be inserted (starting from 0)
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy;
	dlistint_t *new;
	unsigned int i;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	copy = *h;
	i = 0;

	while (copy != NULL && i < idx - 1)
	{
		copy = copy->next;
		i++;
	}

	if (copy == NULL)
	{
		return (NULL);
	}

	if (copy->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = copy->next;
	new->prev = copy;

	if (copy->next != NULL)
	{
		copy->next->prev = new;
	}

	copy->next = new;
	return (new);
}