#include "sort.h"

/**
 * int_ch - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void int_ch(int *a, int *b)
{
	int temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

/**
 * lomuto_partition - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @lt: The starting index of the subset to order.
 * @rt: The ending index of the subset to order.
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int lt, int rt)
{
	int *pivot, abve, blow;

	pivot = array + rt;
	for (abve = blow = lt; blow < rt; blow++)
	{
		if (array[blow] < *pivot)
		{
			if (abve < blow)
			{
				int_ch(array + blow, array + abve);
				print_array(array, size);
			}
			abve++;
		}
	}

	if (array[abve] > *pivot)
	{
		int_ch(array + abve, pivot);
		print_array(array, size);
	}

	return (abve);
}

/**
 * lomuto_sorting - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @lt: The starting index of the array partition to order.
 * @rt: The ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */
void lomuto_sorting(int *array, size_t size, int lt, int rt)
{
	int half;

	if (rt - lt > value_0)
	{
		half = lomuto_partition(array, size, lt, rt);
		lomuto_sorting(array, size, lt, half - value_1);
		lomuto_sorting(array, size, half + value_1, rt);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < value_2)
		return;

	lomuto_sorting(array, size, value_0, size - value_1);
}
