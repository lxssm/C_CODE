#include <stdio.h>

//合并有序数组
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* p1 = nums1 + m + n - 1;
    int* p2 = nums1 + m - 1;
    int* p3 = nums2 + n - 1;
    while (p2 - nums1 >= 0 && p3 - nums2 >= 0)
    {
        if (*p3 > *p2)
        {
            *p1 = *p3;
            p3--;
            p1--;
        }
        else
        {
            *p1 = *p2;
            p2--;
            p1--;
        }
    }
    if (p2 - nums1 < 0 && p3 - nums2 >= 0)
    {
        int count = p3 - nums2 + 1;
        for (int i = 0; i < count; i++)
        {
            *p1 = *p3;
            p3--;
            p1--;
        }
    }
}

//移除数组的元素
int removeElement(int* nums, int numsSize, int val) {
    int* p1 = nums;
    int* p2 = nums;
    int count = numsSize;
    int n = 0;
    while (count--)
    {
        if (*p2 != val)
        {
            *p1 = *p2;
            p1++;
        }
        else
        {
            n++;
        }
        p2++;
    }
    return numsSize - n;
}


//反转单链表

//*
// * Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* pl = head->next;
    struct ListNode* pn = head;
    struct ListNode* tmp = pl;
    head->next = NULL;
    while (pl != NULL)
    {
        tmp = pl;
        pl = pl->next;
        tmp->next = pn;
        pn = tmp;
    }
    return pn;
}

//删除节点

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head != NULL && head->val == val)
        head = head->next;
    if (head == NULL) {
        return head;
    }
    struct ListNode* pl = head;
    while (pl->next != NULL)
    {
        if (pl->next->val == val)
        {
            struct ListNode* pn = pl->next;
            pl->next = pn->next;
        }
        else {
            pl = pl->next;
        }
    }
    return head;

}