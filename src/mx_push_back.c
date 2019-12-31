#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
	t_list *front_node = *list;

	if (*list == NULL)
		*list = mx_create_node(data);
	else {
		while (front_node->next != NULL)
			front_node = front_node->next;
		front_node->next = malloc(sizeof(t_list));
		front_node->next->data = data;
		front_node->next->next = NULL;
	}
}
