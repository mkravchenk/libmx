#include "libmx.h"

void mx_swap_list(t_list *klst, t_list *ilst) {
	void *buf = NULL;
	
	buf = klst->data;
	klst->data = ilst->data;
	ilst->data = buf;
}
