//链表的中间节点
#include <stdio.h>
  struct ListNode {
     int val;
     struct ListNode *next;
  };
 
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* pl = head;
    int count = 0;
    while (pl)
    {
        pl = pl->next;
        count++;
    }
    count = count / 2;
    while (count--)
    {
        head = head->next;
    }
    return head;

}

//环形链表的约瑟夫问题
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param n int整型
 * @param m int整型
 * @return int整型
 */

typedef struct SList
{
    int n;
    struct Slist* next;
}sl;
int ysf(int n, int m) {
    sl* head = malloc(sizeof(sl));
    head->n = 1;
    sl* pl = head;
    sl* pn = NULL;
    sl* tmp = NULL;
    for (int i = 1; i < n; i++)
    {
        pl->next = malloc(sizeof(sl));
        pl = pl->next;
        pl->n = i + 1;
    }
    pl->next = head;
    pl = head;
    while (pl->next != pl)
    {
        pn = pl;
        for (int i = 2; i < m; i++)
        {
            pl = pl->next;
        }
        tmp = pl->next;
        pl->next = tmp->next;
        pl = tmp->next;
    }
    return pl->n;
}

//有序链表的合并
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL)
    {
        return list2;
    }
    else if (list2 == NULL)
    {
        return list1;
    }
    struct ListNode* tmp = NULL;
    struct ListNode* head = NULL;
    if (list1->val > list2->val)
    {
        tmp = list2;
        head = tmp;
        list2 = list2->next;
    }
    else
    {
        tmp = list1;
        head = tmp;
        list1 = list1->next;
    }
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val > list2->val)
        {
            head->next = list2;
            head = list2;
            list2 = list2->next;
        }
        else {
            head->next = list1;
            head = list1;
            list1 = list1->next;
        }
    }

    if (list1 == NULL)
    {
        while (list2)
        {
            head->next = list2;
            head = list2;
            list2 = list2->next;
        }
    }
    else if (list2 == NULL) {
        while (list1)
        {
            head->next = list1;
            head = list1;
            list1 = list1->next;
        }
    }
    return tmp;

}