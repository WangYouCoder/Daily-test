#define _CRT_SECURE_NO_WARNINGS 1

//���test_4_21δ��ɵ�����
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3 = NULL;
    struct ListNode* tail = NULL;
    int tmp;

    while (l1 || l2)
    {
        if (l1 && l2)//����Ϊ��
        {
            tmp = l1->val + l2->val;
            struct ListNode* newnode = Buynewnode(tmp);
            if (l3 == NULL)
            {
                l3 = tail = newnode;
            }
            else
            {
                tail->next = newnode;
                tail = tail->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        else if (l1 && !l2)  //l1��Ϊ�գ�l2Ϊ��
        {
            tmp = l1->val;
            struct ListNode* newnode = Buynewnode(tmp);
            if (l3 == NULL)
            {
                l3 = tail = newnode;
            }
            else
            {
                tail->next = newnode;
                tail = tail->next;
            }
            l1 = l1->next;
        }
        else if (!l1 && l2)//l1Ϊ�գ�l2��Ϊ��
        {
            tmp = l2->val;
            struct ListNode* newnode = Buynewnode(tmp);
            if (l3 == NULL)
            {
                l3 = tail = newnode;
            }
            else
            {
                tail->next = newnode;
                tail = tail->next;
            }
            l2 = l2->next;
        }
    }
    //����ڵ�ֵ����10�����������10����%10���㣬������ʮλ���ּӵ���һ���ڵ���
    struct ListNode* head = l3;
    while (head != tail)
    {
        if (head->val >= 10)
        {
            tmp = head->val / 10;
            head->val %= 10;

            head->next->val += tmp;
        }
        head = head->next;
    }
    //��������β������10���������ֹhead->next->val += val ʱ����Խ��
    if (tail->val >= 10)
    {
        tmp = tail->val / 10;
        tail->val %= 10;

        struct ListNode* newnode = Buynewnode(tmp);
        tail->next = newnode;
    }
    return l3;
}