#define _CRT_SECURE_NO_WARNINGS 1

//����Ļ��Ľṹ
//����һ�����������һ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��
//����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��
// 
//��ת����
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