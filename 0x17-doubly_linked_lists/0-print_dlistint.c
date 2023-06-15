#include "lists.h"

/**
 * print_dlistint - Print all the values of each node in a `dlistint_t` list
 * @h: head pointer in doubly linked list
 * Return: Number of nodes in LL
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

return (count);

}
