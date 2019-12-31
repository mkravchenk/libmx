#include "libmx.h"

void mx_del_strarr(char ***arr) {
	char **ar = *arr;

	for (int i = 0; arr[i] != NULL; ++i)
		mx_strdel(&ar[i]);
	free(**arr);
	*arr = NULL;
}
