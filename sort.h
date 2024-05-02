#ifndef SORT_H_
#define SORT_H_

#include <stddef.h>

// Prototypes for provided functions
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

// Prototype for your sorting function (assuming it's named bubble_sort)
void bubble_sort(int *array, size_t size);

// Structure definition for doubly linked list (provided)
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

#endif /* SORT_H_ */
