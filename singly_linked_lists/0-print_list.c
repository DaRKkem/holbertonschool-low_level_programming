#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		puts("[0] (nil)");
		return (0);
	}

	while (h->next != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return(count);
}
