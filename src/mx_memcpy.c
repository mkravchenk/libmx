#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	char *dest = (char *)dst;
 	const char *source = (const char*)src;

 	while (n) {
    	*(dest++) = *(source++); 
    	--n;
	}
 	return dst;
}
