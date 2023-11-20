#include "sort.h"

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
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, len = size;
	bool spark = false;

	if (array == NULL || size < value_2)
		return;

	while (spark == false)
	{
		spark = true;
		for (a = value_0; a < len - value_1; a++)
		{
			if (array[a] > array[a + value_1])
			{
				swapping(array + a, array + a + value_1);
				print_array(array, size);
				spark = false;
			}
		}
		len--;
	}
}
