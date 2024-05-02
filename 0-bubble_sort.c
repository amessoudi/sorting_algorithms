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


void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 *bubble_sort - Sorts an array in ascending order.
 *
 *
 * @array: Pointer to the array of integers to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
