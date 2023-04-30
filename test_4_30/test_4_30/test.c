#define _CRT_SECURE_NO_WARNINGS 1

//ÒÆ³ıÁ´±íÔªËØ
struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
        return NULL;

    struct ListNode* cur = head;
    struct ListNode* next = cur->next;

    struct ListNode* newhead = NULL;
    struct ListNode* tail = NULL;
    while (cur)
    {
        if (cur->val != val)
        {
            if (newhead == NULL)
            {
                newhead = cur;
                tail = cur;
            }
            else
            {
                tail->next = cur;
                tail = tail->next;
            }
            tail->next = NULL;
        }
        cur = next;
        if (next)
            next = next->next;
    }
    return newhead;
}