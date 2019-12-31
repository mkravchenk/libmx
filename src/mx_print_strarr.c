#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
	int i = 0;

	while (!arr || !delim)
		return;
	while (*arr[i+1] != '\0') {
		mx_printstr(arr[i]);
		mx_printstr(delim);
		i++;
	}
	mx_printstr(arr[i]);
	mx_printchar('\n');
}
