#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print elements of linked list
 * @h: pointer to the first element of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned long count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
