#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len,
				const void *little, size_t little_len) {
	int little_first;
	const unsigned char *b = (const unsigned char *)big;
	size_t blen = big_len;

	if (!little_len)
		return NULL;
	little_first = *(unsigned char *)little;
	while (blen >= little_len 
		   && (b = mx_memchr(b, little_first, blen - little_len + 1))) {
		if (!mx_memcmp(b, little, little_len))
			return (void *)b;
		b++;
		blen = big_len - (b - (const unsigned char *)big);
	}
	return NULL;
}
