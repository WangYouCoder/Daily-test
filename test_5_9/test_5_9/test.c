#define _CRT_SECURE_NO_WARNINGS 1

struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* slow = head, * fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            struct ListNode* cur = slow;
            while (cur != head)
            {
                cur = cur->next;
                head = head->next;
            }
            return cur;
        }
    }
    return NULL;
}