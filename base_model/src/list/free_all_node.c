#include "list.h"

void free_all_node(t_list *list) {
    for (; list != NULL; )
        {
            if (list->previous == NULL && list->next == NULL)
                {
                    free(list->data);
                    free(list);
                    list = NULL;
                }
            if (list != NULL)
                pop_last_node(list);
           
        }
}