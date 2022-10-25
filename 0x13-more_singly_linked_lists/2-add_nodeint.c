#include "lists.h"

/**
 * add_nodeint - adds a new node at the begginning of tghe list
 * @head: points to the first node of the list
 * @n: data to insert into the new node
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
