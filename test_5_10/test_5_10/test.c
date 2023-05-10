#define _CRT_SECURE_NO_WARNINGS 1

//138.���ƴ����ָ�������

struct Node* copyRandomList(struct Node* head) {
    struct Node* cur = head;
    //copy���
    while (cur)
    {
        struct Node* next = cur->next;

        //copy���
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;

        //����
        cur->next = copy;
        copy->next = next;

        //����
        cur = next;
    }

    //����random    
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

        //����
        cur = copy->next;
    }

    struct Node* newhead = NULL, * tail = NULL;
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* next = copy->next;
        //β��
        if (newhead == NULL)
        {
            newhead = tail = copy;
        }
        else
        {
            tail->next = copy;
            tail = tail->next;
        }

        //��ԭ����
        cur->next = next;

        cur = next;
    }

    return newhead;
}