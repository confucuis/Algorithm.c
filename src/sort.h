/*
 * 排序
 *
 */

#ifndef _SORT_H_
#define _SORT_H_

typedef struct ListNode {
    int num;
    struct ListNode *next;
} ListNode


ListNode *create_list_node(int size);
void free_list_node(ListNode *node);



#endif
