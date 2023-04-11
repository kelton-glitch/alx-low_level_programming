#ifndef SEARCH_H
#define SEARCH_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 * 
 * @n: integer
 * @index: index of the node in the list
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 * 
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* Function that searches for a value in a sorted array of integers 
 * using binary search algorithm
 */
int binary_search(int *array, size_t size, int value);

/* Function that searches for a value in a sorted array of integers
 * using linear search algorithm 
 */
int linear_search(int *array, size_t size, int value);

/* Function that searches for a value in a sorted array of integers 
*  using jump search algorithm
*/
int jump_search(int *array, size_t size, int value);

/* Function that searches for a value in a sorted array of integers 
 * using interpolation search algorithm
 */
int interpolation_search(int *array, size_t size, int value);

/* Function that searches for a value in a sorted array of integers
 * using advanced binary search algorithm 
 */
int advanced_binary(int *array, size_t size, int value);

/* Function that searches for a value in a sorted array of integers 
 * using exponential search algorithm
 */
int exponential_search(int *array, size_t size, int value);

/* Function that searches for a value in a sorted array of integers 
 * using the jump search algorithm in a singly linked list
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/* Function that searches for a value in a sorted array of integers
 * using the linear search algorithm in a skip list
 */
skiplist_t *linear_skip(skiplist_t *list, int value);

/* print_list - Prints the content of a listint_t*/
void print_list(const listint_t *list);

/* create_list - Creates a singly linked list*/
listint_t *create_list(int *array, size_t size);

/* free_list - Deallocates a singly linked list*/
void free_list(listint_t *list);

#endif /* SEARCH_H */
