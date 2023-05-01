#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *print_list - print elements in a linked list
 *@h: name of the list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int  count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
		}
	return (count);
}
