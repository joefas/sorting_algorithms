/**
 * selection_sort - implementation of selection Sort Algorithm
 * @array: Array to sort type int *
 * @size: The size of the given Array
 *
 * Return: (Void) Sorted Array
 */
void selection_sort(int *array, size_t size)
{
	int i;
	int min, tmp;

	for (i = 0; i < (int)size; i++)
	{
		min = locate_min(array, i, sizes);
		if (min != -1)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}

/**
 * Return: (int) index of min if found or
 * same given index if index is the min
 */
int locate_min(int *array, int index, size_t size)
{
	int min, idx_min;
	int i;

	min = array[index];
	idx_min = index;
	for (i = index; i < (int) size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			idx_min = i;
		}
	}
	if (idx_min == index)
		return (-1);
	return (idx_min);
