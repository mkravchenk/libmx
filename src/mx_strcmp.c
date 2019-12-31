#include "libmx.h"

int mx_strcmp(const char *s1, const char *s2) {
	int index = 0;

	while (s1[index] == s2[index]) {
		if (s1[index] == '\0')
			return 0;
		index++;
	}
	return (unsigned char)s1[index] - (unsigned char)s2[index]; 
}
