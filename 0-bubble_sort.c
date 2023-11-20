#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *array, size_t size) {
    if (array == NULL || size < 2) {
        return; // No need to sort an array with 0 or 1 element
    }

    int swapped;

    for (size_t i = 0; i < size - 1; i++) {
        swapped = 0;

        for (size_t j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapped = 1;

                // Print the array after each swap
                for (size_t k = 0; k < size; k++) {
                    printf("%d", array[k]);
                    if (k < size - 1) {
                        printf(", ");
                    }
                }
                printf("\n");
            }
        }
