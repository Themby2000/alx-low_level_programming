#include "lists.h"
#include <stdio.h>
/**
* print_listint - Prints all elements of a list
* @h: Pointer to a list
*
* Return: The number of nodes in the list_t list
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
