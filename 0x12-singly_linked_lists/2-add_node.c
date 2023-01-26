#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strlen - Returns length of a string
 * @s: the string
 * Return: length
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * add_node - add node at the beginning of a linked list
 * @head: pointer to pointer to the head
 * @str: str value to add
 * Return: pointer to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

