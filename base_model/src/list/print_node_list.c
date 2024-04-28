#include "list.h"

void print_node_list(t_list *list) {
    if (list != NULL) {
        for (; list->next != NULL; )
        {
            write(1, list->data, my_strlen(list->data));
            write(1, "\n", 1);
            list = list->next;
        }
    }
}