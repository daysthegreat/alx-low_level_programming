#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	if (h == NULL)
	{
		return (NULL);
	}

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)

	{

	new_node->prev = NULL;
	new_node->next = *h;

	if (*h != NULL)
		{
			(*h)->prev = new_node;
		}

	*h = new_node;
	return (new_node);

	}

	dlistint_t *current = *h;
	unsigned int i = 0;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}

	current->next = new_node;

return (new_node);

}

