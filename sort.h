#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/* Comparing direction macros for bitonic sort */
#define DOWN 1
#define UP 0

/**
 * enum bool - enumerate boolean values
 * @false: Equals 0
 * @true: equals 1
 */
typedef enum bool
{
	true = 1,
	false
} bool;

/**
 * struct listint_s - node of doubly linked list
 *
 * @n: integer stored in the node
 * @prev: pointer to previous list element
 * @next: pointer to next list element
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print helper functions */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* sorting algorithms */
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */

