#include "sort.h"

/**
 * integer_swp - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void integer_swp(int *a, int *b)
{
	int temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t space, i, j;

	if (array == NULL || size < value_2)
		return;

	for (space = value_1; space < (size / value_3);)
		space = space * value_3 + value_1;

	for (; space >= value_1; space /= value_3)
	{
		for (i = space; i < size; i++)
		{
			j = i;
			while (j >= space && array[j - space] > array[j])
			{
				integer_swp(array + j, array + (j - space));
				j -= space;
			}
		}
		print_array(array, size);
	}
}
