#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - get the length of a string
 * @s: the string
 * Return: the length of s
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
 * add_node_end - Append a node to a linked list
 * @head: pointer to pointer to the head of the list
 * @str: the string value of a node
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;
	
	current_node->next = new_node;

	return (*head);
	
}
