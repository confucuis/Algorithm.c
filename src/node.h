/*
 * 排序
 *
 */

#ifndef _NODE_H_
#define _NODE_H_

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *create_list_node(int size);
void print_node(Node *node);
void free_node(Node *node);

#endif // _NODE_H_
