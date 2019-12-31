#include "libmx.h"

int mx_sqrt(int x) {
	unsigned int sum;

	if (x > 46340 * 46340)
		return 0;
	for (sum = 0; sum * sum <= (unsigned int)x; sum++) {
			if (sum * sum == (unsigned int)x)
				return sum;
		}
	return 0;
}
