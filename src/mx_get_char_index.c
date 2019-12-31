#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
	const char *stroka = str;
	int i;

	while (str) {
		for (i = 0; i < mx_strlen(str); i++) {
			if (stroka[i] == c) {
				return i;
			}
		}
		return -1;
	}
	return -2;
}
