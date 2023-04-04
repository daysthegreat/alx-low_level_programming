#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list of listint_t nodes
 * @head: Pointer to the head node of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
