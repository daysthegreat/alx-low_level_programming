#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t.
 *	list at a given position.
 * @head: A pointer to the address of the head
 *	of the listint_t list.
 * @idx: The index of the listint_t list where the new node
 *	should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 *	Otherwise - the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	if (head == NULL)
	return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->val = n;

	if (idx == 0)

	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	listint_t *prev_node = *head;

	for (unsigned int i = 0; i < idx - 1; i++)

	{
		if (prev_node == NULL)
		return (NULL);
		prev_node = prev_node->next;
	}

	if (prev_node == NULL)
	return (NULL);

	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
