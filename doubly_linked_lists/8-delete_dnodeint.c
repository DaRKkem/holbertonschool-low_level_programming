#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	copy = *head;

	for (i = 0; i < index; i++)
	{
		if (copy == NULL)
			return (-1);
		copy = copy->next;
	}

	if (copy == NULL)
		return (-1);

	if (copy->prev == NULL)
	{
		*head = copy->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		copy->prev->next = copy->next;
		if (copy->next != NULL)
			copy->next->prev = copy->prev;
	}

	free(copy);
	return (1);
}