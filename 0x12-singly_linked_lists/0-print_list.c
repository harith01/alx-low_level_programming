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
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		count++;
		h = h->next;
	}
	return (count);
}
