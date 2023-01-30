#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - Add a node at the beginnig
 * of a linked list
 * @head: pointer to pointer to the beginning
 * of the linked list
 * @n: the number to be inserted at the node
 * Return: address of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
