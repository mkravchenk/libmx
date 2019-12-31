#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int l = 0;
	int r = size - 1;
	int m = 0;

	*count = 0;
	while (l <= r) {
		(*count)++;
		m = (l + r)/ 2;
		if (mx_strcmp(arr[m], s) == 0)
			return m;
		else if (mx_strcmp(arr[m], s) < 0)
			l = m + 1;
		else if (mx_strcmp(arr[m], s) > 0)
			r = m - 1;
	}
	*count = 0;
	m = -1;
	return m;
}
