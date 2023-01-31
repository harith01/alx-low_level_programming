#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * listint_len - gives number of elements
 * in a linked list
 * @h: pointer to the first element
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
