#include <stdio.h>

/**
 * binary_search - searching in binary
 * @array
 * @size
 * @value
 * Return: int
 */

int binary_search(int *array, size_t size, int value) {
    
	int i, left, right;

	if (array == NULL) {
        return -1;
    }

    left = 0;
    right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        printf("Searching in array: ");
        for (i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
