#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	t_list *ilst;
	t_list *klst;

	if (lst == 0)
		return 0;
	for (ilst = lst; ilst != NULL; ilst = ilst->next) {
		for (klst = ilst->next; klst != NULL; klst = klst->next ) {
			if (cmp(ilst->data, klst-> data) == true)
				mx_swap_list(klst, ilst);
        }
    }
    return lst;
}
