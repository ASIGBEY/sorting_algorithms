#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temporal;

	tmp = *a;
	*a = *b;
	*b = temporal;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, len = size;
	bool bubbly = false;

	if (array == NULL || size < value_2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (a = value_0; a < len - value_1; a++)
		{
			if (array[a] > array[a + value_1])
			{
				swap_ints(array + a, array + a + value_1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
