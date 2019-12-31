#include "libmx.h"

void mx_sort_arr_int(int *arr, int size) {
	int temp = 0;
	int i;
	int g;

	for (i = 0; i < size - 1; i++) {
		for (g = 0; g < size - 1 - i; g++) {
			if (arr[g + 1] < arr[g]) {
				temp = arr[g];
				arr[g] = arr[g + 1];
				arr[g + 1] = temp;
			}
		}
	}
}
