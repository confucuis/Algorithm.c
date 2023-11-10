#include <time.h>
#include <stdlib.h>

#include "sort.h"


ListNode *create_list_node(int size)
{   
    int idx;
    srand((unsigned)time(NULL));
    // 头节点
    ListNode *head = (ListNode *)malloc(sizeof(ListNode));
    head->num = rand();
    head->next = NULL;

    // 当前节点
    ListNode *crut = (ListNode *)malloc(sizeof(ListNode));
    crut->next = NULL;

    if (size == 1) return head;

    for (idx = 0; idx < size-1; idx++){
        ListNode *node = (ListNode *)malloc(sizeof(ListNode));
        if (!node) return goto bk;
	head->next = node;
        node->num = rand();
	node->next = 
    }
bk:
    return NULL;

    return head;
}
