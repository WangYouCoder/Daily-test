#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//leetcode第二题，尚未通过全部用例

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* Buynewnode(int x)
{
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (newnode == NULL)
    {
        return NULL;
    }
    newnode->val = x;
    newnode->next = NULL;
    return newnode;
}

unsigned long long reverse(unsigned long long n)
{
    unsigned long long sum = 0;
    while (n)
    {
        int tmp = n % 10;
        sum = sum * 10 + tmp;
        n /= 10;
    }
    return sum;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    unsigned long long sum1 = 0;
    unsigned long long sum2 = 0;
    struct ListNode* cur1 = l1;
    struct ListNode* cur2 = l2;
    int flag1 = 0, flag2 = 0;

    while (l1)
    {
        sum1 = sum1 * 10 + l1->val;
        if (sum1 == 0)
        {
            flag1++;
        }
        l1 = l1->next;
    }
    sum1 = reverse(sum1);
    while (flag1--)
    {
        sum1 = sum1 * 10;
    }

    while (l2)
    {
        sum2 = sum2 * 10 + l2->val;
        if (sum2 == 0)
        {
            flag2++;
        }
        l2 = l2->next;
    }
    sum2 = reverse(sum2);
    while (flag2--)
    {
        sum2 = sum2 * 10;
    }
    unsigned long long sum3 = sum1 + sum2;

    struct ListNode* l3 = NULL;
    struct ListNode* tail = l3;

    if (sum3 == 0)
    {
        struct ListNode* newnode = Buynewnode(0);
        l3 = newnode;
        return l3;
    }

    while (sum3)
    {
        int tmp = sum3 % 10;
        struct ListNode* newnode = Buynewnode(tmp);
        if (l3 == NULL)
        {
            l3 = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        sum3 /= 10;
    }
    return l3;
}