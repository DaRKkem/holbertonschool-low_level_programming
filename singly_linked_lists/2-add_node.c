#include "lists.h"

/**
 * list_len - adds a new node at the beginning of a list_t list
 * @head: first node of the list
 * @str: the string
 *
 * Return: address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_list;
	char *copy;

	while (head != NULL)
	{
		str = head->str;
		*head->str = copy;
		if (*head->next == NULL)
		{
			printf("OUI");
		}
		*head = head->next;
	}

	free(copy);
	return (*head);
}

int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}