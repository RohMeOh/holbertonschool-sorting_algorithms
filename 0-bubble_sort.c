#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	/* Edge case: no need to sort */
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			/* Compare adjacent elements */
			if (array[j] > array[j + 1])
			{
				/* Swap */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print after swap */
				print_array(array, size);

				swapped = 1;
			}
		}

		/* Optimization: stop if already sorted */
		if (swapped == 0)
			break;
	}
}
