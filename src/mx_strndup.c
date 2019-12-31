#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	char *res;
	size_t len = (size_t)mx_strlen(s1);

	if (len < n) {
		if (!(res = mx_strnew(len)))
			return NULL;
		mx_strcpy(res, s1);
	}
	else {
		if (!(res = mx_strnew(n)))
			return NULL;
		mx_strncpy(res, s1, n);
	}
	return res;
}
