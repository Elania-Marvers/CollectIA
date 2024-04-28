#include "list.h"

t_list *add_top_node_list (t_list *list, void *data, size_t size) {
    t_list *new_list = malloc(sizeof(*new_list));
    new_list->next = list;
    new_list->previous = NULL;
    if (list != NULL) {
        list->previous = new_list;
    }
    new_list->data = malloc(size);
    my_memcpy(new_list->data, data, size);
    return new_list;
}