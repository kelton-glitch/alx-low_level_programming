#include "search_algos.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return:  Pointer to the first node where value is located or
 * if value is not present in the head or of head is NULL, return NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *left_node = NULL;
	skiplist_t *right_node = NULL;

	if (list != NULL)
	{
		right_node = list;
		left_node = list;
		while (right_node->n < value && right_node->express != NULL)
		{
			left_node = right_node;
			right_node = right_node->express;
			printf("Value checked at index [%lu] = [%d]\n",
					right_node->index, right_node->n);
		}
		if (right_node->express == NULL)
		{
			while (right_node->next != NULL)
				right_node = right_node->next;
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
				left_node->index, right_node->index);
		while (left_node->index <= right_node->index && left_node->next != NULL)
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

