#define _CRT_SECURE_NO_WARNINGS 1

//链表的回文结构
//对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。
//给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。
// 
//反转链表
struct ListNode* reverse(ListNode* head)
{
    struct ListNode* cur = head;
    struct ListNode* prev = nullptr;
    struct ListNode* next = cur->next;

    while (cur)
    {
        cur->next = prev;

        prev = cur;
        cur = next;
        if (next)
            next = next->next;
    }

    return prev;
}
class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        // write code here
        if (A == nullptr)
            return false;

        struct ListNode* cur = reverse(A);
        while (cur && A)
        {
            if (cur->val == A->val)
            {
                cur = cur->next;
                A = A->next;
            }
            else {
                return false;
            }
        }
        return true;
    }
};