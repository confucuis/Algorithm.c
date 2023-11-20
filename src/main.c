#include <stdio.h>
#include <stdlib.h>

#include "node.h"

int main(void)
{
    Node *node_list = new_list_node(8);
    if (!node_list)
    {
        printf("create NodeList failure!");
        exit(0);
    }
    print_node(node_list);
    free_node(node_list);

    return 0;
}
