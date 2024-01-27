#include "sort.h"

/***
 * swap - swap two int
 * @a: int
 * @b: int 
 * Return: (void) Swapped int
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - Partition an Array using pivot
 * @array: array
 * @low: int
 * @high:int
 * @size: size of Array (size_t)
 * Return: index of pivote (int)
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x = low - 1, y;

	for (y = low; y <= high; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				swap(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}
	return (x);
}

/**
 * quick_sort - Quick sort Algorithm using lomuto partition
 * @size: size of the Array
 * @array: array to sort
 * Return: Sorted Arrey (void)
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}

/**
 * lomuto_qsort - Sorting Recursively an Array
 * @size: Array size
 * @low: Lowest value of the Array
 * @high: Highest value of the Array
 * @array: Array to be sorted
 * Return: void
 */
void lomunto_qsort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		lomuto_qsort(array, low, i - 1, size);
		lomuto_qsort(array, i + 1, high, size);
	}
}
