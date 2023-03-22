#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of a DLL
 * @head: pointer to pointer to the first element
 * @n: The value to be inserted
 * Return: Address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
