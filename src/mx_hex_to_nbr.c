#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long res = 0;
    int i;

	for (i = 0; hex[i]; i++) {
        if (('0' <= hex[i]) && (hex[i] <= '9'))
            res = res * 16 + (hex[i] - '0');
        else if (('A' <= hex[i]) && (hex[i] <= 'F'))
            res = res * 16 + 10 + (hex[i] - 'A');
        else if (('a' <= hex[i]) && (hex[i] <= 'f'))
            res = res * 16 + 10 + (hex[i] - 'a');
    }
    return res;
}
