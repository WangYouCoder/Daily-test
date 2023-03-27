//OR36 链表的回文结构
// 
//  对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。
//  给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。
//  测试样例：
//  1->2->2->1
//
//先找中间结点
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* slow = head, * fast = head;
//    while (fast && fast->next)      //快慢指针：这里是慢的一次走一个，快的一次走两个
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}
//
////反转链表
//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == nullptr)
//    {
//        return nullptr;
//    }
//    struct ListNode* cur = head, * prev = nullptr;  
//    struct ListNode* next = cur->next;
//    while (cur)
//    {
//        cur->next = prev;
//        prev = cur;
//        cur = next;
//        if (next)
//        {
//            next = next->next;
//        }
//    }
//    struct ListNode* newhead = prev;
//    return newhead;
//}
//
//class PalindromeList {
//public:
//    bool chkPalindrome(ListNode* A) {
//        struct ListNode* Amid = middleNode(A);
//        struct ListNode* last = reverseList(Amid);
//        struct ListNode* prev = A;
//        while (last && prev)
//        {
//            if (last->val == prev->val)
//            {
//                last = last->next;
//                prev = prev->next;
//            }
//            else {
//                return false;
//            }
//        }
//        return true;
//    }
//};


//CM11 链表的分割
//现有一链表的头指针 ListNode* pHead，给一定值x，编写一段代码将所有小于x的结点排在其余结点之前，
//且不能改变原来的数据顺序，返回重新排列后的链表的头指针。

class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        struct ListNode* lessHead, * lesstail, * greatHead, * greattail;
        lessHead = lesstail = (struct ListNode*)malloc(sizeof(struct ListNode));
        lesstail->next = nullptr;
        greatHead = greattail = (struct ListNode*)malloc(sizeof(struct ListNode));
        greattail->next = nullptr;
        struct ListNode* cur = pHead;
        while (cur)
        {
            if (cur->val < x)
            {
                lesstail->next = cur;
                lesstail = cur;
            }
            else {
                greattail->next = cur;
                greattail = cur;
            }
            cur = cur->next;
        }
        lesstail->next = greatHead->next;
        greattail->next = nullptr;
        struct ListNode* newhead = lessHead->next;
        free(lessHead);
        free(greatHead);
        return newhead;
    }
};