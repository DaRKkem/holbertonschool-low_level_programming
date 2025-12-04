#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the first node of the list
 * @str: the string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *copy;
	int i = 0;

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