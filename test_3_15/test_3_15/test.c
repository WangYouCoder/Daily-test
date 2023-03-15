#define _CRT_SECURE_NO_WARNINGS 1
//��ת������
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
    //     //ͷ��
    //     cur->next = newhead;
    //     newhead = cur;

    //     //����
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