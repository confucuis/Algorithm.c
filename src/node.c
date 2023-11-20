#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "node.h"

// 生成订单范围内的随机数
static int generate_random_num(int min, int max)
{
    // 使用当前时间作为随机数种子，避免每次运行生成相同的随机数序列
    // srand((unsigned)time(NULL));

    // 生成[min, max]范围内的随机整数
    int number = rand() % (max - min + 1) + min;

    return number;
}

// 创建指定长度的链表并随即初始化
Node *new_list_node(int size)
{
    srand((unsigned)time(NULL));
    // 头节点
    Node *head = (Node *)malloc(sizeof(Node));
    head->data = generate_random_num(1, 50);
    head->next = NULL;
    if (size == 0)
        return NULL;
    for (int idx = 0; idx < size - 1; idx++)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        if (!node)
            return NULL;
        node->data = generate_random_num(1, 50);
        node->next = NULL;
        if (head->next == NULL)
        {
            head->next = node;
        }
        else
        {
            Node *curt = head->next;
            while (curt->next != NULL)
            {
                curt = curt->next;
            }
            curt->next = node;
        }
    }
    return head;
}

// 打印链表中的数
void print_node(Node *node)
{

    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->next;
    }
}

// 释放链表内存
void free_node(Node *node)
{
    Node *next;
    Node *curt = node;
    while (curt->next != NULL)
    {
        next = curt->next;
        free(curt);
        curt = next;
    }
}
