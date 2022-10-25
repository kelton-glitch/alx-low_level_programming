#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in a list structure
 * @head: points to the head of the list
 * @index: gives the number to search for
 *
 * Return: nth node or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
