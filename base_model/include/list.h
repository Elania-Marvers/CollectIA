#ifndef ___LIST_H___
#define ___LIST_H___

#include "my_stdlib.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    struct s_list   *next;
    struct s_list   *previous;
    void            *data;

}              t_list;




t_list *add_top_node_list (t_list *list, void *data, size_t size);
void print_node_list(t_list *list);
void free_all_node(t_list *list);
void pop_last_node(t_list *list);

#endif //___LIST_H___