#include "lists.h"

/**
 * dlistint_len - Gets the number of elements in DLL
 * @h: pointer to the first element
 * Return: the numbe rof elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		n_elem++;
		h = h->next;
	}
	return (n_elem);
}
