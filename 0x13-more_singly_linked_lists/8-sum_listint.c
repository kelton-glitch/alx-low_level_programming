#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: points to the head of the list
 * Return: sum or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
