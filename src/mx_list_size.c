#include "libmx.h"

int mx_list_size(t_list *list) {
    int count = 0;
    t_list *front_node = list;

    while (front_node) {
        front_node = front_node->next;
        count++;
    }
    return count;
}
