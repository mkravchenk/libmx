#include "libmx.h"

void *mx_memccpy(void *restrict dst, 
                 const void *restrict src, int c, size_t n) {
	unsigned int i;
    char *dest;
    char *source;
    char *ptr;

    dest = (char *)dst;
    source = (char *)src;
    i = 0;
    ptr = NULL;
    if (mx_memchr(src, c, n) == 0)
        return NULL;
    while (n-- && ptr == NULL) {
        dest[i] = source[i];
        if (source[i] == ((char)c))
            ptr = dest + i;
        i++;
    }
    return (ptr);
}
