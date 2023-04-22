#define _CRT_SECURE_NO_WARNINGS 1

//完成test_4_21未完成的任务
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3 = NULL;
    struct ListNode* tail = NULL;
    int tmp;

    while (l1 || l2)
    {
        if (l1 && l2)//都不为空
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
        else if (l1 && !l2)  //l1不为空，l2为空
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
        else if (!l1 && l2)//l1为空，l2不为空
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
    //处理节点值大于10的情况，大于10进行%10运算，并保留十位数字加到下一个节点上
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
    //单独处理尾结点大于10的情况，防止head->next->val += val 时出现越界
    if (tail->val >= 10)
    {
        tmp = tail->val / 10;
        tail->val %= 10;

        struct ListNode* newnode = Buynewnode(tmp);
        tail->next = newnode;
    }
    return l3;
}