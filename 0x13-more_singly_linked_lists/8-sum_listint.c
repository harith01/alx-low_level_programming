#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Add the data in a linked list
 * @head: pointer to the head of the list
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
