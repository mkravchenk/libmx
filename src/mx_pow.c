#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
	double i = 1;
	unsigned int x;

	if (pow == 0)
		return 1;
	for (x = 0; x < pow; x++)
		i *= n;
	return i;
}
