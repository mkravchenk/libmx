#include "libmx.h"

int mx_factorial_iter(int n) {
	int a = 1;
	int max = 12;

	if ((n >= 0) && (n <= max)) {
		for (;n > 1; a *= (n--));
		return a;
	}
	return 0;
}
