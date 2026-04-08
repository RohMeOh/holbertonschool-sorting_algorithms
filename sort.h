#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: integer stored in the node
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* ===== Sorting algorithms ===== */

/* Bubble sort */
void bubble_sort(int *array, size_t size);

/* Insertion sort (doubly linked list) */
void insertion_sort_list(listint_t **list);

/* ===== Print helpers (provided) ===== */

/* Prints an array */
void print_array(const int *array, size_t size);

/* Prints a doubly linked list */
void print_list(const listint_t *list);

#endif
