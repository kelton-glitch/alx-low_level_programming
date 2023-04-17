#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 *
 * @list: pointer to he head of the linked list
 * @size: Number of nodes in the linked list
 * @value: The value to search
 *
 * Return:  Pointer to the first node where value is located or
 * if value is not present in the head or of head is NULL, return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t limit = 0;
	listint_t *left_node = NULL;
	listint_t *right_node = NULL;

	if (list != NULL)
	{
		right_node = list;
		left_node = list;
		while (right_node->n < value &&
				right_node->next != NULL && right_node->index < size)
		{
			left_node = right_node;
			limit += sqrt(size);
			while (right_node->index < limit && right_node->next != NULL)
				right_node = right_node->next;
			printf("Value checked at index [%lu] = [%d]\n",
					right_node->index, right_node->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				left_node->index, right_node->index);
		while (left_node->index <= right_node->index &&
				left_node->next != NULL && left_node->index < size)
		{
			printf("Value checked at index [%lu] = [%d]\n",
					left_node->index, left_node->n);
			if (left_node->n == value)
				return (left_node);
			left_node = left_node->next;
		}
	}
	return (NULL);
}

