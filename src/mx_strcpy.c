#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
	int index = 0;

	while ((dst[index] = src[index]) != '\0')
		index++;
	return dst;
}
