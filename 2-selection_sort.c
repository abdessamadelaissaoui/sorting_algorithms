#include "sort.h"

/**
 * selection_sort - sorts an array of ints using the Selection sort algorithm
 * @array: the array to be sorted
 * @size: the length of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, min_idx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
			{
				min_idx = j;
			}
		}

		if (i != min_idx)
		{
			tmp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = tmp;

			print_array(array, size);
		}
	}
}
