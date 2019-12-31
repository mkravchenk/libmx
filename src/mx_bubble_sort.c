#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
	char *temp;
	int i;
	int g;
	int count = 0;
	
	for (i = 0; i < size - 1; i++) {
		for (g = 0; g < size - i - 1; g++) {
			if (mx_strcmp(arr[g], arr[g + 1]) 
				> mx_strcmp(arr[g + 1], arr[g])) {
				temp = arr[g];
				arr[g] = arr[g + 1];
				arr[g + 1] = temp;
				count++;
			}
		}
	}
	return count;
}
