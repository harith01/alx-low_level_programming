#include "lists.h"

/**
 * print_dlistint - Print all elements of doubly linked list
 * @h: pointer to the first element
 * Return: number nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_nodes);
}
