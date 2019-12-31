#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
	int i;
    unsigned char *a = b;

    i = 0;
    while (b && len > 0) {
        *a = c;
        a++;
        len--;
    }
    return b;
}
