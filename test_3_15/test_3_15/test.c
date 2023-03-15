#define _CRT_SECURE_NO_WARNINGS 1
//反转单链表
struct ListNode* reverseList(struct ListNode* head) {
    // struct ListNode* cur = head;
    // struct ListNode* prev = NULL;
    // while(cur)
    // {
    //    struct ListNode* next = cur->next;
    //    cur->next = prev;
    //    prev = cur;
    //    cur = next; 
    // }
    // return prev;


    // struct ListNode* cur = head;
    // struct ListNode* newhead = NULL;
    // while(cur)
    // {
    //     struct ListNode* next = cur->next;
    //     //头插
    //     cur->next = newhead;
    //     newhead = cur;

    //     //迭代
    //     cur = next;
    // }
    // return newhead;


    if (head == NULL)
    {
        return NULL;
    }
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = cur->next;

    while (cur)
    {

        cur->next = prev;
        prev = cur;
        cur = next;
        if (next)
        {
            next = next->next;
        }
    }
    return prev;
}