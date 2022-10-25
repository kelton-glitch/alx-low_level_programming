#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: points to the head of a list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
