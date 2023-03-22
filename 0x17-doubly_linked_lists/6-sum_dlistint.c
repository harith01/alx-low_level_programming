#include "lists.h"

/**
 * sum_dlistint - Sum all elements of a DLL
 * @head: the beginning og the DLL
 * Return: Sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
