#define _CRT_SECURE_NO_WARNINGS 1

//判断链表是否带环

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {

    if (head == NULL || head->next == NULL)
        return false;

    struct ListNode* slow = head, * fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        if (slow == fast)
        {
            return true;
        }
        else
        {
            slow = slow->next;
            fast = fast->next->next;
        }
    }
    return false;
    // while(slow != fast)
    // {
    //     if(fast == NULL || fast->next == NULL)
    //         return false;
    //     slow = slow->next;
    //     fast = fast->next->next;
    // }
    // return true;
}