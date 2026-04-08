#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * @array: array of integers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		/* Find the smallest element in remaining array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		/* Swap only if needed */
		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;

			/* Print after swap */
			print_array(array, size);
		}
	}
}
