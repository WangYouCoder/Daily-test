#define _CRT_SECURE_NO_WARNINGS 1

//138.复制带随机指针的链表

struct Node* copyRandomList(struct Node* head) {
    struct Node* cur = head;
    //copy结点
    while (cur)
    {
        struct Node* next = cur->next;

        //copy结点
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;

        //连接
        cur->next = copy;
        copy->next = next;

        //迭代
        cur = next;
    }

    //处理random    
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        if (cur->random == NULL)
        {
            copy->random = NULL;
        }
        else
        {
          copy->random = cur->random->next;
        }

        //迭代
        cur = copy->next;
    }

    struct Node* newhead = NULL, * tail = NULL;
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* next = copy->next;
        //尾插
        if (newhead == NULL)
        {
            newhead = tail = copy;
        }
        else
        {
            tail->next = copy;
            tail = tail->next;
        }

        //还原链表
        cur->next = next;

        cur = next;
    }

    return newhead;
}