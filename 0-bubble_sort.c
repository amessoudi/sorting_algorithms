#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - Swaps the values of two integers.
 *
 * This function takes pointers to two integers (`a` and `b`) and swaps
 * their values using a temporary variable.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */

/**
 *bubble_sort - Sorts an array in ascending order.
 *
 *
 * @array: Pointer to the array of integers to be sorted.
 * @size: The size of the array.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int *array, size_t size)
{
	int swapped = 0;

	for (size_t i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
			}
		}

		if (!swapped)
		{
			break;
		}
	}
}
