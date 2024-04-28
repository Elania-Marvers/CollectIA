#include "main.h"
#include "list.h"

int main(int argc, char **argv, char **envp) {
    t_list *list;
    list = NULL;
    list = add_top_node_list(list, "abdel", my_strlen("abdel"));
    list = add_top_node_list(list, "ahmed", my_strlen("ahmed"));
    list = add_top_node_list(list, "allie", my_strlen("allie"));
    list = add_top_node_list(list, "axel", my_strlen("axel"));
    list = add_top_node_list(list, "elie", my_strlen("elie"));
    list = add_top_node_list(list, "kwame", my_strlen("kwame"));
    list = add_top_node_list(list, "max", my_strlen("max"));
    list = add_top_node_list(list, "maxime", my_strlen("maxime"));
    list = add_top_node_list(list, "naledi", my_strlen("naledi"));
    list = add_top_node_list(list, "saidi", my_strlen("saidi"));
    list = add_top_node_list(list, "sasha", my_strlen("sasha"));

    print_node_list(list);


    free_all_node(list);
    return 0;
}