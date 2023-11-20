nclude "sort.h"

/**
 * swapping - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swapping(int *a, int *b)
{
	int temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t a, j;

	if (array == NULL || size < value_2)
		return;

	for (a = value_0; a < size - value_1; a++)
	{
		min = array + a;
		for (j = a + value_1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + a) != min)
		{
			swapping(array + a, min);
			print_array(array, size);
		}
	}
}
