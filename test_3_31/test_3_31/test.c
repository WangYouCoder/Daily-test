#define _CRT_SECURE_NO_WARNINGS 1
// 给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表不存在相交节点，返回 null 。
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    struct ListNode* tailA = headA, * tailB = headB;
    struct ListNode* curA = headA, * curB = headB;
    int lenA = 1, lenB = 1;
    while (tailA)
    {
        tailA = tailA->next;
        lenA++;
    }
    while (tailB)
    {
        tailB = tailB->next;
        lenB++;
    }
    if (tailA != tailB)
    {
        return NULL;
    }
    else
    {
        int n = abs(lenA - lenB);
        if (lenA > lenB)
        {
            while (n--)
            {
                curA = curA->next;
            }
        }
        else
        {
            while (n--)
            {
                curB = curB->next;
            }
        }
    }
    while (curA != curB)
    {
        curA = curA->next;
        curB = curB->next;
    }
    return curA;
}