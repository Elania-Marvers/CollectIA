#include "list.h"

void pop_last_node(t_list *list) {
    if (list != NULL && list->next != NULL) {
        for (; list->next != NULL; )
            list = list->next;
        free(list->data);
        if (list->previous != NULL) {
            list = list->previous;
            free(list->next);
            list->next = NULL;
        }
    }
}