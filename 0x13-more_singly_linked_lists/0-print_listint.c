#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listsint_t list
 * @h: A pointer to thehead of the list_t list.
 *
 * Return: Thenumber of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
