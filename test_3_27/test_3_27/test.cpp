//OR36 ����Ļ��Ľṹ
// 
//  ����һ�����������һ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��
//  ����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��
//  ����������
//  1->2->2->1
//
//�����м���
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* slow = head, * fast = head;
//    while (fast && fast->next)      //����ָ�룺����������һ����һ�������һ��������
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}
//
////��ת����
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


//CM11 ����ķָ�
//����һ�����ͷָ�� ListNode* pHead����һ��ֵx����дһ�δ��뽫����С��x�Ľ������������֮ǰ��
//�Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣

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